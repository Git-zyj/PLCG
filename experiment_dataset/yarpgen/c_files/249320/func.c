/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249320
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned short) (-(((((((/* implicit */int) var_11)) + (2147483647))) >> (((((/* implicit */int) var_10)) - (33533)))))))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) || (((((/* implicit */_Bool) min((((/* implicit */short) var_4)), (var_15)))) && (((/* implicit */_Bool) -875766698939572143LL))))));
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_10))))) > (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12))))))) / (min((((/* implicit */unsigned long long int) (+(875766698939572149LL)))), (((((/* implicit */_Bool) var_6)) ? (var_13) : (var_8)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((var_17) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29348)))))))) ? ((((_Bool)1) ? ((~(var_5))) : (max((((/* implicit */long long int) -32)), (-875766698939572156LL))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_1 + 2])) & (((/* implicit */int) (signed char)81)))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1 - 1])) ^ (((((/* implicit */int) (short)-21029)) & (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) var_3))))))));
            arr_7 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
        }
        for (short i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_5 [i_2 + 2] [i_0 + 2]), (var_0)))) / (((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) arr_5 [i_2 + 2] [i_0 + 2])) : (((/* implicit */int) var_15))))));
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (+(((unsigned long long int) ((unsigned char) var_7))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            var_24 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) arr_10 [i_0 - 1] [i_0 - 1])), (3525473494U)))));
            arr_12 [i_0 + 1] = ((/* implicit */int) arr_10 [i_0] [i_3]);
            var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)2442)) >> (((15326913692738356285ULL) - (15326913692738356274ULL)))));
            var_26 = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_3]))));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_11 [i_0] [i_3])), (var_2))))))))));
        }
        var_28 = ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1]))));
        arr_13 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)43198)));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (unsigned char i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_14 [4LL] [i_4] [i_5 + 1]))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (short)-13128))))), (((arr_11 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (short)21043))) : (5026837191820256424LL))))))));
                    arr_20 [i_5 + 1] [i_4] [i_0 + 2] = max((((((/* implicit */int) (signed char)-27)) % (((/* implicit */int) (unsigned short)2442)))), ((+(((/* implicit */int) arr_2 [i_0] [i_5 - 2])))));
                    var_30 = ((/* implicit */short) (_Bool)1);
                    var_31 = ((/* implicit */unsigned int) arr_15 [i_0]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            arr_24 [i_6 + 1] [i_0 + 1] [i_0] = arr_21 [i_6] [7U];
            arr_25 [i_0 + 2] [i_0 + 2] [i_0] = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (arr_4 [i_0 + 1]))))));
            var_32 = ((/* implicit */short) min((var_32), (var_15)));
        }
        for (int i_7 = 2; i_7 < 10; i_7 += 4) 
        {
            var_33 = ((/* implicit */unsigned int) (_Bool)0);
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4509127214042102891ULL)) ? (((/* implicit */int) (unsigned short)17533)) : (((/* implicit */int) arr_2 [i_0] [i_7 - 1]))))) & (max((((/* implicit */unsigned long long int) (unsigned char)32)), (18446744073709551613ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0])) || (((/* implicit */_Bool) 12399678335023527063ULL)))))) < (arr_15 [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0] [i_0 + 2])) : (((/* implicit */int) (unsigned char)130))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_36 [1] = ((((/* implicit */int) arr_4 [i_10])) % ((~(((/* implicit */int) arr_16 [i_0 - 1] [10ULL] [i_9] [11])))));
                        var_35 = (+(((/* implicit */int) var_1)));
                    }
                } 
            } 
            arr_37 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_0 + 1]))));
        }
    }
}

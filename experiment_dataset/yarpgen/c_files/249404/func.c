/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249404
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (short)5))) == ((+(-6386825093045004813LL))))))))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */_Bool) ((signed char) (-9223372036854775807LL - 1LL)));
        var_14 = ((/* implicit */unsigned short) arr_0 [(signed char)9]);
        var_15 = ((/* implicit */long long int) (_Bool)1);
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_16 ^= ((/* implicit */int) (+(arr_3 [i_1] [i_1])));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (unsigned short i_4 = 2; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_4 - 1])) == (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_10 [i_4] [i_2] [i_3] [i_4 + 1])))))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_1])) == ((~(9631452072235961468ULL))))))))));
                        arr_11 [5ULL] [i_2] [5ULL] [i_4] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2])) : (1331120418516490086ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) > (8815292001473590147ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_3]), (arr_1 [i_2]))))) : ((-(20ULL)))))));
                        var_18 -= (+(((((/* implicit */_Bool) 10774377916520074140ULL)) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_4 + 3])) : (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [i_4 - 1] [i_4 + 1])))));
                        var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(10774377916520074140ULL)))) ? (max((((/* implicit */int) (unsigned short)43783)), (1890473650))) : (min((1483773094), (((/* implicit */int) (unsigned short)36384))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 10; i_5 += 3) 
    {
        var_20 = arr_5 [(_Bool)1] [i_5 + 2];
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) 8430973837452631732LL);
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4239619560U))));
                    var_23 |= ((/* implicit */_Bool) (+(arr_18 [i_5 + 4] [i_5 + 3])));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6] [13ULL])))))) : (arr_18 [i_5 - 1] [i_5 + 3])));
                }
            } 
        } 
        arr_21 [i_5] [i_5 + 1] = ((/* implicit */signed char) arr_3 [i_5 + 1] [i_5]);
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned int i_9 = 2; i_9 < 10; i_9 += 3) 
            {
                {
                    arr_26 [8LL] &= ((/* implicit */_Bool) (((+(2047726706U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((8815292001473590147ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                    var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_5 + 4] [i_9 + 3]))));
                    var_26 = ((/* implicit */signed char) (~(arr_14 [i_5 + 3] [i_8])));
                }
            } 
        } 
        var_27 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (1810444902))))));
    }
    var_28 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) ? (min((((/* implicit */unsigned long long int) var_5)), (18085096795898736497ULL))) : (((2036774060314430142ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
}

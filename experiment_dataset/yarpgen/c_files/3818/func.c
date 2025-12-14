/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3818
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
    var_14 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)154)), ((unsigned short)52413)))), (((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned short)52430))))))) > (var_8)));
    var_15 &= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((var_10) ? (var_3) : (var_2)))) ? (((/* implicit */int) max(((unsigned char)16), ((unsigned char)36)))) : (((/* implicit */int) ((signed char) (signed char)-83))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)13136)))))))) ^ ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (arr_1 [i_0])))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_8 [i_2] = ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-106)))));
                        var_17 ^= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2891)) ^ (((/* implicit */int) (signed char)96))));
                        var_18 = ((/* implicit */short) ((var_8) % ((~(arr_6 [i_1] [i_1] [i_1] [i_1])))));
                        arr_9 [i_0] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))) ^ (21ULL)));
                    }
                } 
            } 
            var_19 += ((/* implicit */short) ((unsigned char) arr_5 [i_1] [i_1] [i_0 - 3]));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)59165))))) ^ (((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1])) ^ (arr_7 [i_0] [i_1] [i_1] [i_1] [i_1])))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0 + 2] [i_1] [i_0 - 4]))));
        }
        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            var_22 &= ((/* implicit */unsigned char) var_10);
            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)25))));
        }
        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                var_24 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((var_2) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) var_1))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) ((arr_5 [i_0] [i_0 + 4] [i_0 + 4]) ^ (arr_5 [i_0 - 2] [i_0 + 2] [i_8])));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_0 - 2] [i_0 - 2])) ^ (((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 3] [i_0] [i_0])) ? (var_8) : (9655162613912031253ULL)))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned int i_9 = 3; i_9 < 22; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        {
                            arr_32 [i_0] [i_0 + 3] = ((/* implicit */signed char) var_9);
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)13134)) >> (((((/* implicit */int) (unsigned char)247)) - (232)))));
                        }
                    } 
                } 
            } 
            arr_33 [i_0 - 3] = ((/* implicit */short) ((((((((/* implicit */int) arr_26 [i_0] [i_0 - 4] [i_0] [i_0 + 2])) + (2147483647))) >> (((/* implicit */int) (signed char)21)))) > ((+(((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (signed char)-82)))))))));
        }
        for (signed char i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_35 [i_0] [i_0 - 1] [i_12]))));
            var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */signed char) var_10)), ((signed char)-105)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)103), ((signed char)-8))))) : (((7853107305010304215ULL) ^ (((/* implicit */unsigned long long int) 5017212881664732460LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_36 [i_0 - 3])))))));
        }
        arr_37 [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */short) arr_14 [i_0 + 3] [i_0 - 4] [i_0])), (var_9))), (((/* implicit */short) max((arr_14 [i_0] [i_0 + 3] [i_0]), (arr_14 [i_0] [i_0 + 4] [i_0]))))));
    }
    var_30 *= ((/* implicit */unsigned short) ((max((max((var_2), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_0)))) ^ (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_12)))) ^ (((/* implicit */int) ((short) var_9))))))));
}

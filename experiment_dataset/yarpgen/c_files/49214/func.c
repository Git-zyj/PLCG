/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49214
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) * (((/* implicit */int) var_4)))) | (((/* implicit */int) var_12)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                var_15 ^= ((/* implicit */long long int) var_5);
                var_16 = ((/* implicit */int) ((_Bool) arr_6 [i_0 + 1] [i_2 - 1] [i_2 - 1]));
            }
            /* vectorizable */
            for (int i_3 = 3; i_3 < 23; i_3 += 1) 
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [(short)21] [(short)4] [14U] [5])) > ((+(((/* implicit */int) var_10))))));
                var_18 = ((/* implicit */short) var_6);
            }
            for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
                var_20 -= ((/* implicit */unsigned long long int) var_10);
            }
            for (short i_5 = 1; i_5 < 20; i_5 += 1) 
            {
                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_11)))), ((+(((/* implicit */int) var_3)))))))));
                var_22 = ((/* implicit */int) min((var_3), (arr_0 [22])));
                arr_15 [i_5] [i_1] [(short)23] = ((/* implicit */short) var_12);
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    var_23 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_7 [i_0 + 1] [(_Bool)1] [i_5 + 3]))))));
                    var_24 *= ((/* implicit */long long int) arr_3 [11U]);
                    arr_18 [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (short)504)) == (((/* implicit */int) arr_4 [i_0 + 1])))))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((unsigned char) (~(((((/* implicit */int) var_12)) * (((/* implicit */int) var_11))))))))));
                }
                for (unsigned int i_7 = 3; i_7 < 23; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 23; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((long long int) arr_12 [i_5])) ^ (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5])))));
                        arr_23 [i_0 + 1] [i_1] [i_5] [(unsigned char)1] [i_7 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_17 [i_5] [(unsigned char)7] [i_1] [i_5]))));
                    }
                    arr_24 [(short)8] [(signed char)8] [(short)13] [i_5 + 3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [14U]))))))) | (((/* implicit */int) var_0))));
                }
                for (signed char i_9 = 2; i_9 < 23; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 2) 
                    {
                        arr_29 [(_Bool)1] [21U] [(_Bool)1] [i_9 - 2] [i_5] = ((/* implicit */signed char) (-((~(var_7)))));
                        arr_30 [(short)13] [i_1] [i_5 - 1] [i_9 + 1] [i_5] = var_5;
                    }
                    arr_31 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-28687), (var_11)))) && (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_5] [i_1] [17] [(short)0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_25 [12U] [i_5] [i_1] [i_0]))))) >= (1699602014U)))));
                }
            }
            var_27 -= var_5;
            var_28 = arr_3 [i_1];
            var_29 = min((((int) arr_1 [(unsigned char)16])), (((/* implicit */int) var_9)));
        }
        arr_32 [i_0 + 1] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_0] [(short)10] [(unsigned short)1] [i_0]) ^ (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (var_7)))) : (((/* implicit */int) arr_14 [(short)22]))))) ? ((-((-(((/* implicit */int) var_9)))))) : (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (signed char)-7))))));
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) min((min((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_9)))))), (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) ((short) (short)17693)))))))))));
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
    {
        var_31 = ((/* implicit */signed char) arr_12 [(short)18]);
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            var_32 += ((/* implicit */_Bool) var_2);
            arr_39 [i_11] = ((/* implicit */signed char) (((+(var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        }
        arr_40 [i_11] = ((/* implicit */signed char) ((unsigned char) var_11));
        var_33 = ((/* implicit */_Bool) var_13);
    }
}

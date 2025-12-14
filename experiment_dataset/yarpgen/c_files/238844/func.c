/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238844
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1307797483)))))))))) & (((long long int) var_12))));
        arr_2 [6ULL] [8] = ((/* implicit */long long int) (+(((unsigned int) (!(((/* implicit */_Bool) (short)2624)))))));
        var_20 -= ((/* implicit */signed char) -2147483639);
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                arr_10 [(short)8] [i_2] [i_2] [i_3 + 1] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)25838));
                var_21 = ((/* implicit */long long int) max((min((max((((/* implicit */unsigned int) var_9)), (var_6))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-14591)), (-1)))) ? (((/* implicit */int) arr_8 [i_2] [i_3 + 1] [i_1] [i_2])) : ((+(((/* implicit */int) arr_6 [i_1])))))))));
                var_22 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)39701)) : (((/* implicit */int) (((-(var_8))) == (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_0)))))))));
                arr_11 [i_1 + 1] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (-2147483647 - 1)))) | (((/* implicit */int) ((var_17) != (((/* implicit */unsigned long long int) 3420311088U)))))))));
            }
            arr_12 [i_2] &= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (signed char)122))))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_11)))))))), (var_1))))));
            var_24 = ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)39693))))));
        }
        for (int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
        {
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) (_Bool)1)))));
            var_25 -= (!(((/* implicit */_Bool) min((arr_4 [i_1 + 1]), (var_6)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_5 = 4; i_5 < 9; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_6 = 2; i_6 < 7; i_6 += 2) 
                {
                    arr_24 [i_1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) (~(var_8)));
                    arr_25 [i_1] [i_5] [2ULL] [i_6 + 1] = ((/* implicit */long long int) ((int) arr_4 [i_1]));
                    arr_26 [i_1] [i_1] [i_1] [i_5] [i_6] = (((-(var_10))) >= (((/* implicit */unsigned int) 2147483647)));
                    arr_27 [i_1 + 1] [i_1 + 1] [i_4] [i_5] [i_4] = ((/* implicit */int) var_9);
                }
                for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    var_26 -= ((/* implicit */int) ((short) arr_5 [i_1 - 1]));
                    arr_30 [i_7] [i_7] [i_7] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (signed char)-125))) ? (((/* implicit */int) ((((/* implicit */int) var_18)) > (-11)))) : (((/* implicit */int) ((_Bool) arr_21 [i_1] [i_4] [i_4] [i_5])))));
                    arr_31 [i_5] [i_5] = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (var_5)))));
                }
                var_27 ^= ((/* implicit */unsigned long long int) (unsigned char)177);
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 7; i_8 += 4) 
            {
                arr_34 [i_1 + 1] = ((/* implicit */unsigned int) arr_28 [i_1] [i_4] [i_4] [i_8 - 2]);
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)39710))))) && (((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                arr_35 [i_4] [4U] [i_8] [i_4] = ((/* implicit */unsigned int) arr_0 [i_1] [i_4]);
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 7; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_29 -= ((/* implicit */unsigned int) (((~(var_13))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1])))))));
                            arr_42 [i_10] [i_9 - 1] [i_10] [i_1 - 1] [i_10] [1LL] [i_1 - 1] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_41 [i_10]))))));
                            arr_43 [i_10] [i_4] [i_10] [i_4] [2] = ((/* implicit */short) var_5);
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */short) (+(var_13)));
            var_31 = max(((+(((((/* implicit */int) var_14)) ^ (((/* implicit */int) (short)-14591)))))), (((/* implicit */int) min((((/* implicit */short) (signed char)-102)), (var_14)))));
        }
        arr_44 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_10)))) == ((~(((/* implicit */int) var_16)))))))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_18))) ^ (arr_29 [i_1] [i_1 - 1] [i_1] [i_1 - 1]))));
        arr_45 [i_1 + 1] = ((/* implicit */unsigned short) (+(((((_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) var_11)), (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)28791))) > (var_10)))))))));
    }
    var_32 = ((short) var_6);
}

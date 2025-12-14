/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30525
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
    var_12 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            var_13 = ((/* implicit */signed char) ((unsigned long long int) 3261167860U));
            arr_5 [i_0] = ((/* implicit */unsigned int) ((signed char) arr_4 [i_1 - 2] [i_1 + 1]));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
                arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) 52495523U)))));
            }
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (arr_3 [i_1 + 1] [i_3 + 1] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))) != (3261167839U)))))));
                /* LoopSeq 1 */
                for (int i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    arr_16 [i_3] [i_3] [i_3] [i_4 + 3] = ((/* implicit */_Bool) 3261167858U);
                    arr_17 [i_3] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                }
                arr_18 [i_3] = ((/* implicit */unsigned short) 18446744073709551607ULL);
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_1 - 2] [i_1 - 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
            }
            for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 2) 
            {
                var_15 = ((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5 - 3]);
                arr_23 [i_0] = (((~(10ULL))) > (((/* implicit */unsigned long long int) ((int) var_10))));
                arr_24 [i_0] [i_1 - 1] [i_5] [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0])) || (((/* implicit */_Bool) (signed char)112)))));
            }
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (var_1)));
        }
        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                arr_33 [i_0] [i_0] [i_7] = ((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1033799462U))))))))));
                arr_34 [i_0] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_11 [i_0] [i_6] [i_6])))) > (((((arr_13 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-28663))))) << (((/* implicit */int) max((arr_31 [i_7] [i_6]), ((_Bool)0))))))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_37 [i_0] [i_6] [i_8] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned int) ((int) arr_29 [i_0] [i_8] [i_0] [i_8]))) : (1033799462U)))));
                var_17 = ((/* implicit */unsigned short) ((arr_20 [i_8] [i_0]) >> (((((/* implicit */int) max((var_7), (var_11)))) - (33148)))));
                arr_38 [i_0] [i_6] [i_8] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0] [i_0]) * (var_2)))) > (var_1)));
            }
            /* LoopSeq 4 */
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                /* LoopSeq 4 */
                for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned int) 1720895402U)))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) << (((arr_40 [i_0] [i_6] [i_9] [i_10]) - (11182272388215237677ULL)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (3261167860U))))))));
                }
                for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    arr_46 [i_0] [i_0] [i_6] [i_9] [i_11] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_11])) && (((/* implicit */_Bool) arr_7 [i_0])))));
                    var_20 = (+(((/* implicit */int) (unsigned short)16240)));
                    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (max((max((arr_41 [i_0] [i_6] [i_9] [i_6] [i_0] [i_6]), (3383227811U))), (((/* implicit */unsigned int) var_4))))));
                }
                /* vectorizable */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    arr_50 [i_12] [i_9] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_40 [i_9] [i_9] [i_6] [i_0]);
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */long long int) 3261167863U)) >= (arr_1 [i_0]))))));
                }
                for (short i_13 = 2; i_13 < 22; i_13 += 1) 
                {
                    var_23 ^= ((/* implicit */unsigned short) var_10);
                    var_24 -= ((/* implicit */signed char) ((((/* implicit */int) ((((int) (_Bool)0)) >= (((/* implicit */int) (_Bool)1))))) << (((((/* implicit */int) arr_26 [i_0] [i_6] [i_9])) - (51682)))));
                    var_25 = ((/* implicit */unsigned int) arr_35 [i_13] [i_9] [i_0]);
                }
                var_26 = ((/* implicit */unsigned short) ((max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_0] [i_6] [i_6] [i_9] [i_9]))) < (arr_14 [i_0] [i_0] [i_9] [i_6] [i_9] [i_6])));
                arr_53 [i_0] [i_6] [i_9] = ((/* implicit */long long int) 185963647);
                var_27 = (~(((/* implicit */int) (signed char)-1)));
                var_28 = ((/* implicit */short) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned int) var_0)), (arr_25 [i_0] [i_6]))))) * (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (_Bool)0))) << (((/* implicit */int) ((((/* implicit */_Bool) 2540928156U)) || (((/* implicit */_Bool) (unsigned char)78))))))))));
            }
            for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (25165824U))) : (((/* implicit */unsigned int) ((int) ((unsigned short) (_Bool)1))))));
                var_30 = ((/* implicit */unsigned char) (unsigned short)63548);
            }
            for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                var_31 = ((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                var_32 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) 611873839)) / (arr_0 [i_6] [i_0])))) ? (((/* implicit */int) var_11)) : (((int) (_Bool)1))))));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (((+(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_6])) || (((/* implicit */_Bool) arr_15 [i_0] [i_6] [i_0] [i_6]))))))) << (((((int) (~(((/* implicit */int) arr_59 [i_0] [i_6] [i_16]))))) + (20735))))))));
                arr_62 [i_6] = ((/* implicit */unsigned short) arr_14 [i_16] [i_16] [i_6] [i_6] [i_0] [i_0]);
                var_34 = ((/* implicit */_Bool) max(((+((+(var_1))))), (((/* implicit */unsigned long long int) var_2))));
            }
            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - ((-(arr_14 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))));
        }
        arr_63 [i_0] = (-(((int) arr_2 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 4) 
        {
            var_36 = ((/* implicit */unsigned char) var_5);
            arr_67 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((max((274877906943ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) - (((arr_65 [i_17] [i_17]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63555))))))) > (16542607318434528144ULL)));
        }
        for (unsigned int i_18 = 0; i_18 < 23; i_18 += 1) 
        {
            arr_71 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1130475945U)), (3657184534336955453LL)))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_0] [i_0] [i_18])))))));
            arr_72 [i_18] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_10))))))))));
            var_37 = ((/* implicit */signed char) ((_Bool) 17054188901604067122ULL));
        }
    }
    for (int i_19 = 1; i_19 < 23; i_19 += 4) 
    {
        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (unsigned short)63036))));
        arr_76 [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_73 [i_19])) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) (!(((/* implicit */_Bool) 4400511154506319154LL))))))))));
    }
}

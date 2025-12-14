/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196587
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
    var_11 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) var_1);
                arr_11 [(short)6] [i_1] [i_2] = (!((!(((/* implicit */_Bool) min((-2522605525834496842LL), (-1770641188439256874LL)))))));
                arr_12 [6] [i_2] [i_2] [(unsigned short)10] = ((/* implicit */int) ((((/* implicit */_Bool) 2522605525834496835LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) : (2522605525834496835LL)));
            }
            arr_13 [i_0] [i_0] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 4294967272U)))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 3; i_3 < 19; i_3 += 2) 
            {
                arr_16 [i_0] [i_3] [i_3] = (+(min((arr_7 [i_3] [i_3 - 2] [i_3]), (arr_7 [i_3] [i_3 + 1] [i_3]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)246)) != (((/* implicit */int) var_7))))) > (((/* implicit */int) ((-4310061829609165813LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))))))));
                    arr_22 [i_3] [11ULL] = (~(arr_0 [i_1 - 2] [i_3 - 3]));
                }
            }
            var_12 ^= ((/* implicit */unsigned char) 769560183U);
            arr_23 [i_1] [i_0] [8] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_1]);
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    arr_31 [i_0] [i_5] [11] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) (+(arr_7 [i_5 - 1] [i_5 + 1] [i_5])));
                    arr_32 [i_0] [i_0] [i_5] [i_5] [i_7] = ((((/* implicit */int) (unsigned char)125)) % (arr_3 [i_0]));
                }
                arr_33 [i_5] = ((/* implicit */unsigned char) (-((+(-1770641188439256877LL)))));
                arr_34 [i_0] [i_5] = var_5;
            }
            for (short i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                arr_37 [i_0] [i_5] [i_8] = ((/* implicit */unsigned short) (+(arr_20 [9LL] [i_5] [i_8] [i_8] [i_8])));
                arr_38 [i_0] [i_5] [i_5] [i_0] = var_2;
                arr_39 [i_5] [i_5] [i_8] [i_5] = ((/* implicit */unsigned char) arr_3 [i_5 - 1]);
            }
            for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                arr_42 [i_5] [0] [i_9] = ((/* implicit */unsigned int) ((unsigned short) (signed char)-113));
                var_13 = ((/* implicit */unsigned char) var_8);
                arr_43 [i_5] = ((/* implicit */int) (unsigned short)35651);
            }
            var_14 = ((/* implicit */int) max((var_14), (((((((/* implicit */unsigned long long int) -383923360)) != (12600003338655023832ULL))) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_6 [(unsigned char)16] [i_5] [i_5] [i_5]))))));
            /* LoopNest 3 */
            for (unsigned short i_10 = 2; i_10 < 19; i_10 += 2) 
            {
                for (int i_11 = 3; i_11 < 17; i_11 += 2) 
                {
                    for (long long int i_12 = 4; i_12 < 19; i_12 += 2) 
                    {
                        {
                            arr_52 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                            arr_53 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) (~(arr_8 [i_10 - 1] [i_12] [i_12] [i_5])));
                        }
                    } 
                } 
            } 
        }
        arr_54 [i_0] [4LL] = ((/* implicit */_Bool) max(((-((+(2522605525834496827LL))))), ((~(-8446600989233145879LL)))));
        arr_55 [9LL] = ((long long int) 13334576447203920736ULL);
    }
    for (short i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        arr_59 [i_13] = ((/* implicit */unsigned int) min((max((((/* implicit */int) (signed char)84)), (arr_58 [i_13]))), (((((((/* implicit */int) (unsigned char)215)) * (((/* implicit */int) (signed char)(-127 - 1))))) % ((~(((/* implicit */int) (unsigned short)65289))))))));
        /* LoopSeq 4 */
        for (int i_14 = 0; i_14 < 25; i_14 += 2) 
        {
            var_15 = ((/* implicit */int) 1770641188439256870LL);
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 1; i_15 < 24; i_15 += 2) 
            {
                arr_66 [i_13] [i_15] [i_13] [i_13] = (unsigned char)27;
                /* LoopSeq 1 */
                for (unsigned short i_16 = 2; i_16 < 23; i_16 += 2) 
                {
                    arr_69 [i_15] = ((/* implicit */_Bool) arr_62 [i_15] [i_15] [i_15 + 1] [i_15 - 1]);
                    arr_70 [i_15] [i_14] [i_15] [i_16] = ((/* implicit */unsigned char) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 2447290016U)))))))));
                    var_16 = ((/* implicit */signed char) max((-7678264744052137292LL), (((/* implicit */long long int) arr_56 [i_13]))));
                    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(2147483646)))) ? (((/* implicit */unsigned int) min((arr_58 [i_14]), (((/* implicit */int) arr_63 [i_16] [i_14] [i_15]))))) : ((+(arr_64 [i_13] [i_14] [i_15] [i_16]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_16] [i_16 + 2]))))))));
                }
                arr_71 [i_15] = ((/* implicit */signed char) -7678264744052137292LL);
                arr_72 [i_15] = ((/* implicit */unsigned short) min((arr_57 [i_13] [i_14]), (((/* implicit */long long int) (_Bool)1))));
                arr_73 [i_13] [i_14] [i_15] = ((/* implicit */unsigned char) arr_61 [16LL]);
            }
            for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                var_18 &= ((/* implicit */unsigned short) (signed char)117);
                var_19 = (short)-4040;
                arr_76 [i_13] [i_14] = ((/* implicit */signed char) ((-805203983) != (((/* implicit */int) (short)9415))));
                arr_77 [i_13] [i_13] [i_17] = ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)59981)) || (((/* implicit */_Bool) (unsigned char)183))))));
            }
        }
        for (int i_18 = 1; i_18 < 22; i_18 += 2) 
        {
            var_20 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))), (arr_63 [i_13] [i_18 + 3] [i_18 - 1])));
            arr_81 [i_13] [i_13] [i_18] = -2147483646;
            arr_82 [i_18] = ((/* implicit */long long int) (~((~(var_6)))));
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */int) arr_61 [i_13]);
            arr_86 [i_19] [i_13] [i_19] = ((/* implicit */unsigned short) var_1);
            arr_87 [i_13] [i_19] [i_13] = ((/* implicit */unsigned short) ((-2147483646) <= (((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (+(max((((((/* implicit */_Bool) arr_83 [i_13] [i_13] [i_13])) ? (-6143705264721275766LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (2621602957706890365LL))))))));
            arr_91 [i_13] [i_20] = ((/* implicit */long long int) 1647968255);
            arr_92 [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) var_9);
        }
    }
    var_23 &= ((/* implicit */unsigned long long int) (unsigned char)182);
}

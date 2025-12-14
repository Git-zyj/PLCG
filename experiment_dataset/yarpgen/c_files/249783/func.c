/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249783
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
    var_11 = ((/* implicit */int) var_5);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) max((arr_1 [i_0] [11U]), (((/* implicit */unsigned long long int) var_6))));
        var_13 = ((/* implicit */unsigned char) (unsigned short)13778);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)38950)) * (((/* implicit */int) (!(((/* implicit */_Bool) -1771148577)))))));
            var_15 = ((/* implicit */unsigned int) arr_4 [i_1]);
            var_16 += ((/* implicit */unsigned int) (+(max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0] [7LL]))))), ((~(((/* implicit */int) arr_3 [i_0] [i_0]))))))));
        }
        var_17 |= ((/* implicit */short) arr_5 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-1771148577)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))) <= (((((/* implicit */_Bool) 524288U)) ? (((/* implicit */unsigned long long int) 3372510219U)) : (arr_8 [i_0])))))) : (-16)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0]);
                        var_20 = ((/* implicit */_Bool) (-((+(arr_4 [i_4])))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            var_21 = (i_5 % 2 == 0) ? (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5]))) - (arr_18 [i_5] [i_5]))))) - (315862476278011595ULL))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))) << (((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5]))) - (arr_18 [i_5] [i_5]))))) - (315862476278011595ULL))) - (1226467665352796687ULL)))));
            var_22 = var_4;
        }
        /* LoopSeq 1 */
        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 4) 
        {
            var_23 -= ((/* implicit */int) arr_21 [i_5] [2LL]);
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_15 [i_7])), (arr_30 [i_5] [i_5] [i_7 + 3] [i_7] [i_5])));
                            var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3483308107U)))))) > (var_8)));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(-1771148577)))))) ? (arr_27 [i_7]) : (((/* implicit */long long int) var_5))));
                            var_27 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (16213786028545852892ULL) : (2058577335292510084ULL)))) ? (((/* implicit */unsigned long long int) arr_23 [i_8] [i_7] [i_8])) : ((~(10268502502091632693ULL)))));
                            var_28 *= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((int) 1073217536U))), (((524288U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_9]))))))) << ((((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) <= (arr_16 [i_10])))))) + (22)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                var_29 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)1792)), (2147483647)));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    for (long long int i_13 = 3; i_13 < 21; i_13 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) 3483308107U);
                            var_31 -= ((/* implicit */unsigned short) (+(((1951235353) + (((/* implicit */int) min((((/* implicit */short) arr_39 [i_5] [i_7] [i_7] [i_7] [i_7] [i_12])), (arr_31 [i_11] [i_7 - 1] [i_12] [i_13]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) (+((-2147483647 - 1))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483637)) ? (0U) : (4294443009U)))) ? (((/* implicit */long long int) 524288U)) : (((((/* implicit */_Bool) 7531459006715769830ULL)) ? (-2163668160791061567LL) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_7 - 1] [i_5] [i_15] [i_15])))))));
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524287U)) ? (8204438769194314626LL) : (-1300913894382257932LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)22886))) : (arr_26 [i_7 + 1]))))));
                            var_35 = var_6;
                        }
                    } 
                } 
                var_36 = ((/* implicit */long long int) (+(14420667723866296013ULL)));
                var_37 = ((/* implicit */unsigned char) (-(max(((-(var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_5] [i_5] [i_11] [i_5])) * (((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5])))))))));
            }
            for (unsigned int i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                var_38 = ((/* implicit */unsigned short) arr_26 [i_5]);
                var_39 = ((/* implicit */unsigned long long int) arr_33 [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7 + 2]);
                var_40 = ((/* implicit */unsigned long long int) -1951235353);
                var_41 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(arr_15 [i_7 + 2])))), ((+(arr_42 [i_5] [i_5] [i_7 - 1] [i_7 + 3] [i_7 - 1])))));
            }
        }
    }
    var_42 |= ((/* implicit */unsigned long long int) var_9);
}

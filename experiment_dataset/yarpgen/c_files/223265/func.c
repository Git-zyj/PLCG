/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223265
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((2697463977U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) ^ (997705467))))))) ? (((arr_0 [i_1]) | (((/* implicit */int) ((short) var_0))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_13)))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1])))))));
                var_15 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) >= (((/* implicit */int) arr_3 [i_0]))))), ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_1]))))));
                var_16 += ((/* implicit */unsigned short) min((((/* implicit */long long int) 575159380)), (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_11))))) * (max((((/* implicit */long long int) var_8)), (847945873267467666LL)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((_Bool) ((int) -847945873267467666LL)));
                            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */int) arr_7 [i_3] [i_1] [i_2]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (unsigned char i_6 = 1; i_6 < 14; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_6 + 2] [i_6 + 2])) ? (((/* implicit */int) arr_7 [i_6 + 2] [i_6 + 2] [i_5])) : (((/* implicit */int) arr_7 [i_6 + 1] [i_6 + 2] [i_5])))))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_28 [i_4] [i_4] [i_6] [i_6] [i_8] [i_8] = ((/* implicit */unsigned char) (_Bool)1);
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_6 + 2] [i_6 + 2] [i_8])) ? (3389304625U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_5 [i_4] [i_6]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_1 [(short)9] [(short)9])))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                {
                    arr_36 [i_10] = ((/* implicit */signed char) max((max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_33 [i_11] [i_10] [i_10]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(11857944735585185367ULL)))))))));
                    arr_37 [i_9] [i_9] &= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)1)))))) < (((((/* implicit */_Bool) max((847945873267467666LL), (((/* implicit */long long int) arr_34 [i_9] [i_9]))))) ? (((/* implicit */int) arr_13 [i_9])) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (_Bool)0)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 2; i_13 < 12; i_13 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) arr_8 [i_10] [i_10] [(_Bool)1] [i_11]);
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((int) ((((/* implicit */int) arr_26 [i_11] [i_13 - 1] [i_13] [i_13] [i_11])) ^ (((/* implicit */int) var_7))))))));
                                var_22 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)81)) ? (5864004098697631501LL) : (((/* implicit */long long int) 3728393744U))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((((/* implicit */short) (signed char)15)), (var_10)))))));
                                arr_43 [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_12] [i_10] [i_10])))))));
                                var_23 = ((/* implicit */unsigned char) max((((427765879366617726ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))))), (((arr_40 [i_9] [i_10] [i_11] [i_12] [i_13 - 2] [i_13] [i_10]) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (signed char)-116)))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) max((((arr_2 [i_9]) ? (var_9) : (((/* implicit */int) arr_2 [i_9])))), (((int) var_8))));
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((6588799338124366248ULL), (((/* implicit */unsigned long long int) (short)-9326)))))));
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */signed char) var_6);
    var_27 = ((/* implicit */signed char) min((min((((/* implicit */int) var_11)), ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((var_5) - (110415372)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)201)) == (-1009742740)))) : (((/* implicit */int) ((short) 4267291520U)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21877
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
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1ULL)) ? (((248855723528843072ULL) ^ (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) + (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (var_2))) ? (var_0) : ((-(4057631126U))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) (+((((-(var_2))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_12))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((1992247293) >> (((((/* implicit */int) (unsigned char)236)) - (235))))))));
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) ^ (18446744073709551615ULL)))))) ? (((18197888350180708525ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8897))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1018262296292238308ULL)) && ((_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [(short)19] [i_0] [i_0] [i_1 - 1] [i_2] [i_3 - 1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (var_1) : (((((/* implicit */_Bool) (-(9223372036854775781LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 0U)))) : (((((/* implicit */_Bool) 248855723528843071ULL)) ? (-8904581062499218361LL) : (((/* implicit */long long int) 16384U))))))));
                            arr_15 [i_0] [i_0] [(short)12] [(short)12] = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) var_9)))));
                            arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
                            var_19 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    arr_20 [i_0] [1U] [i_0] = ((/* implicit */unsigned short) 18197888350180708525ULL);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (-1LL)))) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) var_4))));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [(signed char)19] = ((/* implicit */unsigned char) ((int) 2282599989U));
                                arr_28 [i_0] [i_0] [i_1] [i_4] [i_4] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)9))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 200522169U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_1)))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56638))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) == (4294967295U))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

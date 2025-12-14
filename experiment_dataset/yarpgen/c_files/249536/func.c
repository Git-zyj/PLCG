/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249536
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */short) var_7);
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33507)) ? (((((/* implicit */long long int) 3479307234U)) | (5043940943400402187LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_3)))))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (5043940943400402190LL) : (5043940943400402169LL)))))))))));
                var_12 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_9)))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (-5043940943400402183LL)));
                    arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (min((5043940943400402187LL), (5043940943400402190LL)))))) ? (max((((((/* implicit */_Bool) 305915334808612238LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-5043940943400402198LL))), (((/* implicit */long long int) (signed char)-102)))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)71), (var_6)))))));
                }
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    var_14 = ((/* implicit */unsigned long long int) 2814818619U);
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((5043940943400402203LL), (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (118472555U)))) : (-5043940943400402183LL)));
                }
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(-5043940943400402181LL))))));
                                var_17 -= ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-102)))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5043940943400402191LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11475))) : (5043940943400402171LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-5043940943400402176LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6001))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_0))))));
                                var_18 += ((/* implicit */short) (unsigned short)25483);
                            }
                        } 
                    } 
                    arr_24 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)-16309)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_0)))));
                    var_19 += ((((/* implicit */_Bool) ((var_5) ? (1336491878940168199LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (min((((/* implicit */unsigned int) (signed char)-30)), (var_7))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4176494752U))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) min((((/* implicit */unsigned int) var_5)), (3103367415U))))))))));
}

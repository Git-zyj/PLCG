/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33365
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((signed char)-107), ((signed char)-1)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)32256)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 984852668980299863LL)) | (4284432168910187463ULL)))) ? (((((/* implicit */_Bool) var_11)) ? (549487378432LL) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -170351802)) ? (170351801) : (((/* implicit */int) (signed char)121))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40518)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (3579680524399141258ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */long long int) arr_0 [i_2])), (var_3)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) (((-(((((/* implicit */_Bool) (unsigned short)52489)) ? (((/* implicit */long long int) 170351801)) : (var_4))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)33275)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (unsigned short)25018)))))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned short) var_6);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -170351801)) ? (170351776) : (((((/* implicit */_Bool) 170351801)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (short)(-32767 - 1)))))));
    var_20 &= ((/* implicit */unsigned char) min(((unsigned short)45631), (((/* implicit */unsigned short) (signed char)1))));
}

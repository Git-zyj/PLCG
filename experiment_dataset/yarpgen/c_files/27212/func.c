/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27212
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((274071813865577220ULL) * (18172672259843974395ULL)));
        var_10 += ((/* implicit */unsigned char) var_6);
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) (((_Bool)1) ? (18172672259843974404ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35741)))));
                            var_11 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (signed char)-7))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 19; i_5 += 2) 
                {
                    for (signed char i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        {
                            var_12 += ((/* implicit */unsigned short) -1211754997);
                            var_13 += ((/* implicit */_Bool) ((arr_1 [i_6 - 2]) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_1] [i_1] [i_1])))))));
                            var_14 += ((/* implicit */long long int) arr_4 [i_2] [i_6 - 2]);
                            arr_21 [i_1] [(unsigned char)11] [i_1] [i_2] = ((/* implicit */signed char) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)224))));
                            var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (signed char)-77)))), ((~(((/* implicit */int) arr_11 [i_1] [i_6 - 1] [i_5 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53619
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
    var_16 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5534835096586156442ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) : (5534835096586156442ULL)))) ? (((/* implicit */int) (short)32751)) : (((/* implicit */int) ((signed char) (short)-32752))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned char) (short)-8239);
                    arr_9 [i_2] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) (short)32766);
                    var_18 = ((/* implicit */unsigned char) (short)-1242);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 7; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned short)6))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32746)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (9265776987260698367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-32741)))) : (((((/* implicit */_Bool) 4382567590863076534LL)) ? (-8304811968978338981LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4839)))))))) : (((unsigned long long int) (short)-32741))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) (short)32743);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220721
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-4021694784430663989LL), (((((/* implicit */_Bool) 3498979227U)) ? (7230105301337514375LL) : (((/* implicit */long long int) 3498979223U))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) (signed char)-117))))) ? ((((_Bool)1) ? (4955717678973377270LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))))) : (((/* implicit */long long int) min((-1932084975), (((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)22531)) | (((/* implicit */int) var_0)))) - (((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)166)))))))));
                    arr_6 [i_0] |= ((/* implicit */unsigned char) (_Bool)0);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_1)) + (795988085U)))) ? (((long long int) var_11)) : (((/* implicit */long long int) min((795988093U), (((/* implicit */unsigned int) var_4)))))))));
    var_17 = ((((((/* implicit */int) min(((unsigned short)26707), (((/* implicit */unsigned short) (_Bool)1))))) - (((/* implicit */int) var_5)))) * (((/* implicit */int) (_Bool)0)));
}

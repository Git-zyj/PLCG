/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241850
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
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [(short)0] [(short)0] = ((/* implicit */short) ((((((((/* implicit */_Bool) max(((short)-5508), (((/* implicit */short) (signed char)-1))))) ? (((/* implicit */int) min(((short)-32760), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) min(((short)29575), ((short)29576)))))) + (2147483647))) << (((((/* implicit */int) (short)29581)) - (29581)))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29606))) <= (4277727735341232175ULL)))) <= (((/* implicit */int) max(((signed char)32), ((signed char)-99)))))))) != (((long long int) 10311072326732592156ULL))));
                    arr_8 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)56)))), (((/* implicit */int) max((((/* implicit */short) (signed char)2)), ((short)(-32767 - 1)))))))) - (10311072326732592147ULL)));
                    arr_9 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 8135671746976959455ULL)) ? (((/* implicit */int) (unsigned short)45971)) : (((/* implicit */int) (short)4095)))), (((/* implicit */int) (unsigned short)16384))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4776788994008126887LL)) ? (8135671746976959456ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16393)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-71)) + (2147483647))) >> (((-2339287650513771639LL) + (2339287650513771653LL)))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (3440186878152458070ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (long long int i_4 = 3; i_4 < 18; i_4 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((_Bool) (((_Bool)1) ? (2160304937U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))))));
                var_16 = ((/* implicit */unsigned short) max((((unsigned int) ((((/* implicit */int) (signed char)-125)) / (((/* implicit */int) (short)-8172))))), (max((min((2351134986U), (((/* implicit */unsigned int) (unsigned short)22)))), (((/* implicit */unsigned int) ((unsigned short) -1577551242)))))));
            }
        } 
    } 
    var_17 = ((short) ((unsigned char) var_9));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */int) (unsigned short)12)), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48117))) & (-9223372036854775806LL)))) ? (((((/* implicit */int) (signed char)-54)) | (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (signed char)-120)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216751
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) min((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) (short)24129)), (((long long int) 2968646779U)))))))));
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61288)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) (signed char)127))))) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) ((short) (short)-8114))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */int) var_1);
                    arr_10 [i_1] [i_2] = ((/* implicit */short) (-(0U)));
                    var_12 &= ((/* implicit */long long int) ((unsigned char) (_Bool)1));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)127)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61305))) : (1750336516U)))));
                }
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
                {
                    arr_16 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (unsigned short)4270)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) 1750336516U)) ? (2170083731U) : (((/* implicit */unsigned int) var_9))))))) ? (max((((/* implicit */unsigned long long int) ((_Bool) (-2147483647 - 1)))), (((((/* implicit */_Bool) 2923123806655292048LL)) ? (335214835314239129ULL) : (14296889401791698148ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        var_13 = min((((/* implicit */long long int) min(((unsigned short)61258), (((/* implicit */unsigned short) (short)-6679))))), ((~(-8666745523344852587LL))));
                        var_14 = ((/* implicit */long long int) var_0);
                        arr_20 [i_1] [i_3] [i_1] = ((/* implicit */signed char) var_0);
                        var_15 = ((/* implicit */short) (((~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)62)), ((unsigned short)40089)))))) ^ (((((var_0) + (2147483647))) << (((((/* implicit */int) var_7)) >> (((((/* implicit */int) (unsigned char)97)) - (80)))))))));
                        var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) max(((short)-31446), ((short)25220)))) + (((var_2) + (((/* implicit */int) (unsigned short)4865))))))), (min((min((2128896794669525532LL), (((/* implicit */long long int) (unsigned short)16383)))), (((/* implicit */long long int) ((int) 898233382U)))))));
                    }
                    arr_21 [i_0] [i_1] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (15LL))))), (((long long int) ((((/* implicit */_Bool) 2147483634)) ? (((/* implicit */int) (short)4901)) : (((/* implicit */int) (short)-6679)))))));
                }
                var_17 = ((/* implicit */signed char) (-(2852875806U)));
                arr_22 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59877)) ? (var_9) : (((/* implicit */int) (unsigned short)65535)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-517201720623730823LL) % (((/* implicit */long long int) ((/* implicit */int) (short)-4624)))))) ? ((+(((/* implicit */int) (short)-1024)))) : (min((((/* implicit */int) (short)-9102)), (var_6)))))) : (max((var_8), (min((((/* implicit */unsigned int) (short)-30331)), (0U)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) 1442091478U)) ? (var_0) : (((/* implicit */int) (_Bool)1)))), (((-2147483630) + (((/* implicit */int) (unsigned char)35)))))))))));
}

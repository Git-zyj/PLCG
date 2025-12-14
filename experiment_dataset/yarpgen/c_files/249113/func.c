/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249113
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
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [(_Bool)1] [i_0] &= ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_2] [(_Bool)1]))));
                    var_13 = min((((signed char) (_Bool)0)), (((/* implicit */signed char) (_Bool)0)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), (var_3)))) ^ (var_1))) != (((/* implicit */long long int) (-((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (738892053U))))))));
                                var_14 -= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) 890587135U)) - (9057578098658695763ULL))))) == (max((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) (signed char)111))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1 - 1] [i_2] = ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9141))) < (13797046133708803995ULL)))) ^ (((/* implicit */int) ((signed char) (unsigned short)33784))))) >= (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned short)3318))))), ((unsigned short)65535)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) > (1082600771U)));
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (((unsigned long long int) ((var_1) < (((/* implicit */long long int) 896650645U)))))));
    var_17 = ((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_11))));
}

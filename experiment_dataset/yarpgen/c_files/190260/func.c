/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190260
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
    var_18 &= ((/* implicit */long long int) min((((max((((/* implicit */unsigned long long int) var_9)), (18422524374937561056ULL))) - (((4076312221227176795ULL) & (4076312221227176795ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_10))))) >> (((((((/* implicit */int) (unsigned char)121)) + (((/* implicit */int) var_9)))) - (19798))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)149))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) ? (var_1) : (17592186044160ULL)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 514001744U)) : (17592186044141ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107)))))))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8176)))))))) ? ((+(17592186044164ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) 3780965551U))))) ? (min((((/* implicit */long long int) 514001745U)), (9223372036854775807LL))) : (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))))))));
                    }
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)-6993))))) % (max((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (514001744U))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) | (0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (3780965552U)))) : ((~(5127540005251110814ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 2029341512U)) : (var_2)))) ? (((((/* implicit */_Bool) var_1)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (short)32757))))) ? (max((31ULL), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))))))));
}

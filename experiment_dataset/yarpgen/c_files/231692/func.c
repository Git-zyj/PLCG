/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231692
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)8)))), (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (signed char)-1))))))) ? (min((((/* implicit */int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)0)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1023))))));
    var_11 = ((/* implicit */_Bool) (short)192);
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */int) min(((unsigned char)10), ((unsigned char)85)))) % ((((_Bool)1) ? (((/* implicit */int) (unsigned short)8192)) : (((/* implicit */int) (unsigned char)8)))))) : (((/* implicit */int) (signed char)11))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((-182236768), (((/* implicit */int) (signed char)25)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) 524287);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (unsigned char)7))));
        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)4)))) | (((/* implicit */int) ((signed char) (signed char)-1)))));
        var_16 += ((/* implicit */unsigned int) ((((int) (_Bool)0)) | (((/* implicit */int) ((signed char) (signed char)1)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((long long int) 268435456U)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-70)))))) ? (((/* implicit */int) (signed char)0)) : (((((/* implicit */int) ((unsigned short) (unsigned char)21))) % (((((/* implicit */_Bool) (unsigned short)7433)) ? (477888514) : (((/* implicit */int) (signed char)11))))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((/* implicit */int) ((661601472U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-73))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)3)), ((unsigned short)49419)))) ? (((/* implicit */int) ((signed char) 4026531859U))) : (((((/* implicit */_Bool) (unsigned short)5837)) ? (((/* implicit */int) (unsigned short)14232)) : (((/* implicit */int) (signed char)-31)))))))))));
        arr_13 [i_2] [i_2] = ((/* implicit */_Bool) (signed char)(-127 - 1));
        arr_14 [i_2] [i_2] = (signed char)-15;
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-1257405985) - (((/* implicit */int) (signed char)37)))) + (((/* implicit */int) min(((unsigned char)129), ((unsigned char)240))))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (-1257405996) : (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) (unsigned short)46799)) ? (((/* implicit */int) (signed char)6)) : (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (short)16))))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2855
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [(unsigned short)9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (239467434U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32131))) >= (var_12))))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned short)11020))))) ? ((-(((/* implicit */int) (unsigned short)55768)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-32131)) : (1501844611))))))));
                var_16 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 1056046297U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23961))) : (min((3370520095U), (4294967278U))))), (((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) * (min((((/* implicit */unsigned int) var_15)), (4007050961U)))))));
                var_17 += ((/* implicit */long long int) ((int) ((((/* implicit */int) (unsigned short)44233)) + (((/* implicit */int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2843)) ? (((/* implicit */int) (unsigned short)18)) : (0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 6U)) ? (29U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180)))))))) && (((4161727965989748012LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))))))))));
                var_19 |= ((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)105)), ((unsigned short)19268)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned int) (unsigned char)92))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2376727785U))), (((/* implicit */unsigned int) ((((/* implicit */int) ((short) 411437861U))) << (((var_0) - (822237188U))))))));
    var_21 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= (((((/* implicit */_Bool) min((var_14), (var_9)))) ? (1533369873U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200887
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))) : (-1152190293406242587LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : ((~(var_1)))))) || (((/* implicit */_Bool) (unsigned char)14))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((unsigned long long int) (unsigned char)241);
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((13134050978724343588ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_1 - 1]))))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (3249829920U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))))) ? (((((/* implicit */_Bool) (unsigned short)32)) ? (13134050978724343588ULL) : (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) (short)256)))) == (((((/* implicit */_Bool) 588548592544804351ULL)) ? (1855709340) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 4] [i_0 - 3]))))))))));
                var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((966564673) + (((/* implicit */int) max(((signed char)112), (arr_1 [i_0]))))))) ? (((((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 4] [i_1])) + (((((/* implicit */_Bool) -8174980674928548855LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0)))))) : (((/* implicit */int) arr_0 [i_1 + 2] [i_1]))));
                var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0 + 1]))) ? (((((/* implicit */_Bool) -8473749455802672946LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned short) (signed char)88))))), (max((((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 4] [i_1 + 2])), (((((/* implicit */int) (signed char)20)) + (((/* implicit */int) arr_3 [i_0] [i_1 + 2]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)18)), (-8174980674928548855LL))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((11117194329360100399ULL), (((/* implicit */unsigned long long int) (signed char)40))))) && (((((/* implicit */_Bool) max(((unsigned short)32), (((/* implicit */unsigned short) (signed char)62))))) && (((/* implicit */_Bool) (unsigned char)14))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) / (((((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (9073735915756905750ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)19)) * (((/* implicit */int) (unsigned char)59)))))))));
                }
            } 
        } 
    } 
}

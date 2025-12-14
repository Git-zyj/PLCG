/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27931
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) + (var_0))))))) >= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2))))) == ((+(((/* implicit */int) (unsigned short)54270)))))))));
    var_11 -= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */long long int) var_8)) : (var_6))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            arr_6 [(_Bool)1] [(_Bool)1] &= ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) (_Bool)0))))), (var_0)))));
            var_12 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (var_0))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3237196136867817269LL))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -550387260615289515LL)) || ((_Bool)1)))))));
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            var_13 = ((/* implicit */signed char) (~(458752)));
            var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)179)), ((~((~(((/* implicit */int) (short)-31873))))))));
        }
        var_15 = min(((short)0), (((/* implicit */short) (((+(((/* implicit */int) arr_3 [i_0])))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        arr_9 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) arr_2 [(short)16]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 4])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) var_4)))))))));
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (+(max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6621))) == (var_0)))), ((+(((/* implicit */int) var_3))))))));
    }
    for (long long int i_3 = 3; i_3 < 12; i_3 += 2) 
    {
        var_16 *= ((/* implicit */unsigned int) var_7);
        var_17 = ((/* implicit */long long int) (short)32755);
    }
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    for (unsigned char i_4 = 4; i_4 < 10; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_3)), (var_0)));
        var_20 = ((/* implicit */short) var_2);
    }
}

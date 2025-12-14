/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227979
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
    var_17 = ((/* implicit */unsigned char) 13838447077298361127ULL);
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) (((-(((/* implicit */int) (unsigned char)224)))) != (((/* implicit */int) max(((unsigned short)54995), (((/* implicit */unsigned short) var_6)))))))), ((+((~(((/* implicit */int) (unsigned short)0))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)32762)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (((~((-2147483647 - 1)))) != (((((/* implicit */int) var_14)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (135)))))));
    }
    for (signed char i_1 = 1; i_1 < 8; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) (unsigned short)0);
        arr_5 [i_1] = ((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)16320)) + (-2147483631))), (max((((/* implicit */int) (unsigned short)0)), ((-(((/* implicit */int) (unsigned short)65515))))))));
    }
    for (signed char i_2 = 1; i_2 < 8; i_2 += 3) /* same iter space */
    {
        var_21 = arr_3 [i_2];
        var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_1 [i_2]) : (((/* implicit */int) arr_3 [i_2]))))) ? (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (-1) : (((/* implicit */int) var_6)))) : (min((-39602911), (((/* implicit */int) (unsigned short)65535)))))), (30368388)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) arr_9 [i_3])) ? (((((/* implicit */int) (unsigned short)65527)) >> (((5605498571657817778ULL) - (5605498571657817775ULL))))) : (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6))))))));
        arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2U)) || (((/* implicit */_Bool) -2121879565)))))) == (((unsigned long long int) (unsigned char)31))));
    }
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        arr_16 [i_4] = 2U;
        var_24 -= ((/* implicit */long long int) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) 3237800337550808479LL))))))), (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
        var_25 = ((((/* implicit */_Bool) 508LL)) ? (((/* implicit */unsigned int) -2121879545)) : (943994108U));
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 2) 
        {
            {
                arr_23 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (unsigned short)45398);
                arr_24 [i_5] = ((min((((/* implicit */long long int) 0U)), (-1LL))) > (((long long int) (~(var_12)))));
                var_26 = ((/* implicit */_Bool) (unsigned short)0);
            }
        } 
    } 
}

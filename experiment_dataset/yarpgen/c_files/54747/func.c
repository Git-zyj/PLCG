/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54747
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (((var_9) ? (arr_8 [i_0] [i_0] [i_3 - 2] [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */int) (unsigned short)46379)) : (max((((((/* implicit */int) var_3)) << (((var_7) - (8919777946797891103LL))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                        arr_10 [i_0] [5LL] [i_0] [i_3] [i_3 + 1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_2 [i_2] [i_3 + 2])) + (80)))))), (max((3490095889741716259LL), (-3490095889741716253LL)))));
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) == ((+((-2147483647 - 1)))))))) > ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4294967285U)))))));
                        var_16 = ((/* implicit */long long int) var_4);
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) 1538897916U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_0)))))))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_4)) - (26663)))))));
        var_18 &= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19156)))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_17 [i_4] [i_4] = ((/* implicit */long long int) (-((+(((/* implicit */int) var_0))))));
                    arr_18 [i_4] = (+((-(arr_14 [i_0] [i_4] [i_5]))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned char) var_2);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) min((var_10), (((/* implicit */unsigned int) var_3)))))) || (((/* implicit */_Bool) max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) var_5)))))));
}

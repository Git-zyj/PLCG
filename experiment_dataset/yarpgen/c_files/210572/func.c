/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210572
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
    var_11 ^= ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((-2053627691), (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))), (((arr_4 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)141)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                    arr_12 [i_0] [i_1 - 2] [i_1] [i_0] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */short) arr_4 [i_0])))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-109)), (var_9)))), (min((3784036066956316598ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 - 2] [i_2])))))));
                    var_12 = ((/* implicit */short) max((((/* implicit */int) ((short) (unsigned short)56944))), (((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_2])) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0]))))));
                    var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)(-32767 - 1))), (max((((/* implicit */long long int) (-2147483647 - 1))), (8796093014016LL))))))))));
                    var_14 = ((/* implicit */short) min((var_14), ((short)32755)));
                }
            } 
        } 
        var_15 = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned int) 4113757148U))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */unsigned int) 1485873220)) : (955672011U)))) ? (7424108766892800942LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (short)15990)) >= (-383292710))))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (signed char i_4 = 3; i_4 < 18; i_4 += 1) 
        {
            {
                arr_19 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((917504), (-2052939457))), ((+(((/* implicit */int) (short)(-32767 - 1)))))))) ? (((/* implicit */long long int) ((int) (~(((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (-1) : (var_8)))) ? (max((((/* implicit */long long int) arr_18 [i_4 + 2] [i_4])), (arr_17 [i_3] [i_4 - 3]))) : (arr_17 [i_4 + 2] [i_4 + 4])))));
                var_17 = ((/* implicit */signed char) min((3483199483570968041ULL), (((/* implicit */unsigned long long int) ((arr_18 [i_4 + 1] [i_4]) | (((/* implicit */int) (!(var_7)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) >> (((((((/* implicit */_Bool) 1538510289235206962LL)) ? (-917503) : (((/* implicit */int) (short)(-32767 - 1))))) + (917517)))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (short)32755)))), (((/* implicit */int) var_1))))) || (var_5)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240176
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
    var_12 = (+(((/* implicit */int) (_Bool)1)));
    var_13 = ((/* implicit */short) var_0);
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((min((((/* implicit */long long int) 1684831220)), (var_1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65534)) - (3194652)))), (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-27486))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) : (((unsigned long long int) (unsigned short)37704))))));
                                var_16 = ((/* implicit */long long int) var_4);
                                arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((min((((/* implicit */unsigned int) 891898543)), (4294967295U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                                var_17 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) min(((unsigned short)61183), (((/* implicit */unsigned short) (unsigned char)255))))), (9223372036854775807LL))));
                                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)42))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [4] [i_1] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_11) - (13767741913168152285ULL)))))) : (min((var_9), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */int) (_Bool)1)) + (2147483635))) : (min((-1074760593), (551167467))))))));
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) (unsigned short)7)))), (((/* implicit */int) ((((/* implicit */int) var_5)) > (-1455627754))))))) ? ((-(4294967295U))) : (((/* implicit */unsigned int) (~(var_3))))));
                    var_19 = ((/* implicit */long long int) ((unsigned int) var_9));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18))) : (622205419101038471LL)));
                                var_21 = ((/* implicit */int) min((var_21), ((+(((/* implicit */int) (_Bool)1))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_7))));
                                var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */int) (unsigned char)105)), (2147483647))) : (var_6)))) ? (var_3) : (((/* implicit */int) var_5))))));
                                arr_29 [i_5] [i_6] [i_7] [i_6] [i_8] [(_Bool)1] [i_8] = ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                    arr_30 [i_6] [10U] = var_2;
                }
            } 
        } 
    } 
}

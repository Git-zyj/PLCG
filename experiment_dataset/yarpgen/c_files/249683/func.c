/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249683
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) arr_0 [i_1 - 1] [i_0]))));
            var_12 = ((/* implicit */int) ((min(((-(var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (unsigned short)33661)) : (-1)))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (_Bool)1)) : (-1904139127)))) ? (((/* implicit */int) (signed char)11)) : (((((/* implicit */int) (signed char)2)) / (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
            var_13 = (((~(((((/* implicit */int) var_6)) / (((/* implicit */int) arr_3 [i_0])))))) ^ (((/* implicit */int) (signed char)-122)));
        }
        var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))) ? (var_8) : (((/* implicit */long long int) (-(2856982992U))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */int) ((long long int) max((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_2]))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            {
                                arr_17 [(signed char)5] [i_2] [i_5 - 1] [11U] [i_3] [i_2] [i_2] = ((/* implicit */long long int) -1965684859);
                                var_16 &= ((/* implicit */short) ((signed char) (+(max((var_3), (var_3))))));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */signed char) (_Bool)1);
                    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (signed char)-6)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((-5580132) * (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (signed char)12)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-58)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) : (290368664U)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-3)))));
                    var_19 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16)))))) % (var_8));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) var_4)) ? (-1) : (16777215))))))))));
        arr_18 [i_2] = ((/* implicit */unsigned char) var_5);
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((max((5095292550149952580ULL), (((/* implicit */unsigned long long int) (unsigned char)61)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)140), (((/* implicit */unsigned char) (_Bool)0)))))))))));
}

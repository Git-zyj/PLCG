/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226572
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
    var_15 -= ((/* implicit */_Bool) var_11);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (var_6))) ? (((/* implicit */unsigned long long int) ((long long int) var_3))) : (min((((/* implicit */unsigned long long int) var_5)), (var_10)))));
        arr_4 [i_0] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((unsigned int) var_9)) : (var_13))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)89)))) << (((((((/* implicit */_Bool) (-(var_9)))) ? (var_6) : ((+(var_12))))) - (10155382609534255868ULL))))))));
        var_17 = ((/* implicit */unsigned long long int) ((short) min((var_10), (((/* implicit */unsigned long long int) var_0)))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-121), ((signed char)96))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_14))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_1))))))) ? (var_13) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_5)))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (signed char i_3 = 2; i_3 < 7; i_3 += 3) 
        {
            {
                arr_15 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26247))) >= (16697714649381468381ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_11)) ? (var_9) : (var_10)))))));
                arr_16 [i_2] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                            var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (var_7))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) ((unsigned long long int) min((var_12), (((((/* implicit */_Bool) var_11)) ? (var_9) : (var_6))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) 16697714649381468381ULL)) ? (4130961007174807045ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112)))))))))));
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_13))) >> (((((/* implicit */int) ((signed char) var_6))) + (30))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (((~(var_6))) == (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_13)) : (var_12))))))));
}

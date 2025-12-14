/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48194
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
    var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((_Bool) 0))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (signed char)-126)))))) ^ (min((var_1), (var_1)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 = (+(((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1] [i_2]))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_7)))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_2 [(unsigned char)1]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (var_7))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((signed char) (signed char)-118)))));
            var_19 = ((signed char) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_5 [i_3] [i_3] [i_0]))));
            var_20 = ((short) (!(((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_2 [i_0]))))));
        }
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            arr_13 [(unsigned short)8] [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned short) (short)32767));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)114)) != (((/* implicit */int) (unsigned char)254))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 377068231U)) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) (short)-1)))) : (((((/* implicit */_Bool) ((unsigned int) (unsigned char)248))) ? (((((/* implicit */int) arr_4 [i_0] [i_0] [i_5])) << (((arr_11 [(unsigned char)3] [(unsigned short)6]) - (3555424946U))))) : (((/* implicit */int) ((signed char) arr_10 [i_4] [i_4] [i_4])))))));
                        arr_20 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            {
                arr_27 [i_7] [6ULL] = ((/* implicit */short) (unsigned char)250);
                var_23 = ((/* implicit */signed char) arr_26 [i_7] [i_7]);
                arr_28 [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17598045415711203859ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL)));
            }
        } 
    } 
    var_24 = (~(((/* implicit */int) (short)32456)));
}

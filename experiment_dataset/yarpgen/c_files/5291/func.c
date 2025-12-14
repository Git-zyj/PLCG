/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5291
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((unsigned short) ((var_7) - (var_5))));
                    var_18 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10)))))) + (((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) : (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                        var_20 -= (!(((/* implicit */_Bool) var_9)));
                        var_21 -= ((/* implicit */short) (~(((/* implicit */int) (!((_Bool)1))))));
                        var_22 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) * (((unsigned int) var_2)))))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        var_24 = ((unsigned short) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((unsigned short) var_6))) : ((-(((/* implicit */int) var_12))))));
                        var_25 = ((/* implicit */unsigned int) (((!(((_Bool) 4112261465U)))) ? (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)12900))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(var_8)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((short) var_10))) || ((!(((/* implicit */_Bool) var_1)))))))));
                        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) var_10))))) & ((+(var_14))))) != (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_3))))))));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) var_7))))))) ? ((~(((var_11) / (((/* implicit */long long int) var_7)))))) : (var_11))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        var_28 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_15))) ^ ((+(((/* implicit */int) var_6))))))) % ((-(((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_14)))))));
                        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_1))))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) | ((~(var_9))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            {
                var_31 = ((/* implicit */unsigned int) (-(var_2)));
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    var_32 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((var_8) && (((/* implicit */_Bool) var_9))));
                        var_34 = ((/* implicit */short) (((-(((/* implicit */int) var_3)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    }
                }
            }
        } 
    } 
}

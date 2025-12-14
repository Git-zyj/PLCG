/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194340
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (signed char)-116))))))) : ((+(((((/* implicit */long long int) ((/* implicit */int) var_6))) / (-3753105612873061383LL)))))));
        var_11 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25799))))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (((-(623624942))) < (((((/* implicit */_Bool) (unsigned short)24577)) ? (524032) : (var_0))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)24562))))));
        var_13 &= ((/* implicit */unsigned long long int) ((short) 2790405182U));
        arr_5 [(unsigned char)13] [i_1 - 1] = (-(var_3));
    }
    for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        var_14 = ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) (signed char)-127))))) : ((+(var_5)))));
        var_15 = ((/* implicit */int) var_1);
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((unsigned char) 2790405182U));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_19 [i_3 + 1] [i_5] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) (~(var_4))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 4; i_7 < 10; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) -1923617126))));
                            var_19 = ((/* implicit */unsigned int) (short)2047);
                            var_20 += ((/* implicit */short) var_1);
                            var_21 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38856))) : (var_5))) + (((/* implicit */unsigned long long int) ((388953451U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))))))));
                        }
                        var_22 -= ((/* implicit */short) (~(((var_2) | (((/* implicit */unsigned long long int) 524032))))));
                    }
                } 
            } 
        } 
    }
    var_23 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -572479856)) ? (((/* implicit */unsigned long long int) 388953442U)) : (((((/* implicit */_Bool) 3910744498U)) ? (((/* implicit */unsigned long long int) 5LL)) : (var_5)))))));
}

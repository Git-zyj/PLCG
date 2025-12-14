/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18984
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))));
    var_17 = ((/* implicit */short) (~(((long long int) ((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) (((+(((((/* implicit */int) arr_1 [i_0] [i_0])) - (313371105))))) <= (((/* implicit */int) (unsigned char)180))));
        var_19 = ((/* implicit */int) max((var_19), (((-1782218886) % ((-(((/* implicit */int) (unsigned char)182))))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
                        arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1 - 2])))))) > (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [i_2]) : (((/* implicit */unsigned int) var_7)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_5 = 2; i_5 < 17; i_5 += 4) /* same iter space */
        {
            arr_20 [i_4] = ((/* implicit */unsigned long long int) ((int) ((unsigned char) 8191U)));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_2 [i_5]))));
            var_22 *= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (9113815945982311354LL))));
        }
        for (long long int i_6 = 2; i_6 < 17; i_6 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_4] [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)182)))) == (((/* implicit */int) ((((/* implicit */int) arr_22 [i_6] [i_6])) == (((/* implicit */int) var_0)))))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_2))));
        }
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        {
                            var_25 &= ((/* implicit */unsigned short) ((((arr_26 [i_7]) % (arr_16 [i_4] [i_9]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_26 = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) var_10)))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) var_3))))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) 8191U)))));
        }
        var_29 = var_15;
    }
}

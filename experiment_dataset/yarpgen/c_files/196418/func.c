/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196418
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
    var_10 = ((/* implicit */short) ((((((((/* implicit */int) var_9)) % (((/* implicit */int) var_5)))) < (((/* implicit */int) max((((/* implicit */short) var_0)), ((short)-11722)))))) ? (((((/* implicit */long long int) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) % (max((((/* implicit */long long int) var_2)), (-7241188044338464152LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)133)))))))));
    var_11 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) + (max((var_8), (((/* implicit */unsigned int) var_4)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_9))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)177)))) >> (((((/* implicit */int) arr_1 [i_0])) - (49)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_1 [i_0]))));
            var_13 -= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)177)) || (((/* implicit */_Bool) (unsigned char)177)))) || (((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1]))));
            arr_6 [i_0] [i_1] = ((/* implicit */short) var_8);
        }
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0])))) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)177)) < (((/* implicit */int) var_9)))))));
        var_15 = ((/* implicit */unsigned short) var_9);
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        var_16 *= ((((/* implicit */_Bool) 16384U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)73)));
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 16; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    arr_16 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [i_4])) + (((/* implicit */int) var_6)))) << (((((/* implicit */int) var_3)) + (21)))));
                    arr_17 [i_2 + 1] [i_2] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)179)) & (((/* implicit */int) (unsigned short)19073))));
                    var_17 *= ((/* implicit */short) arr_1 [i_2]);
                    arr_18 [i_2] [i_2] [i_4] = ((/* implicit */short) var_1);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 13; i_5 += 1) 
        {
            for (int i_6 = 2; i_6 < 16; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) arr_25 [i_5] [i_5 + 4] [i_5]))));
                    var_19 = ((((/* implicit */_Bool) arr_23 [i_2 + 1] [i_5] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (3283103904U));
                    arr_26 [i_5] [i_5 - 3] [i_5] = ((/* implicit */short) var_1);
                }
            } 
        } 
    }
}

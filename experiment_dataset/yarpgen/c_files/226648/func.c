/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226648
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
    var_20 = ((/* implicit */unsigned char) ((long long int) (signed char)127));
    var_21 = ((/* implicit */signed char) var_12);
    var_22 = ((/* implicit */unsigned char) (unsigned short)65535);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_23 |= ((/* implicit */short) -2856482392751331675LL);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */int) max((((((((/* implicit */_Bool) (signed char)-126)) ? (371704113) : (((/* implicit */int) (unsigned short)49003)))) < (((/* implicit */int) max((((/* implicit */short) var_17)), (arr_2 [i_0])))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_0])) <= (((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_2])))))) != (3579216483961547561LL)))));
                    var_24 |= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) var_16)) - (38)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1] [i_1]))) + (-2856482392751331649LL)))));
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_0] [i_1] [i_2])))) ^ (min((var_18), (((/* implicit */unsigned int) arr_6 [i_2] [i_0] [i_0]))))))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) (((~(((/* implicit */int) var_16)))) > (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-30786)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (unsigned short i_5 = 2; i_5 < 8; i_5 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) var_0);
                        var_26 = ((/* implicit */signed char) var_7);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 1; i_6 < 8; i_6 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */int) max((var_27), (max((((/* implicit */int) ((short) min((arr_14 [i_6] [i_6] [i_6 + 2]), (var_7))))), (((int) (~(arr_1 [i_6] [(_Bool)1]))))))));
        var_28 = ((/* implicit */int) (unsigned short)0);
    }
    for (unsigned char i_7 = 1; i_7 < 8; i_7 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */int) ((unsigned short) min((arr_2 [i_7]), (((/* implicit */short) arr_4 [i_7 - 1] [i_7 - 1])))));
        var_30 = ((/* implicit */unsigned short) (-(2950405524U)));
    }
}

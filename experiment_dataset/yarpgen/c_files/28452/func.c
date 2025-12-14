/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28452
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
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), (arr_3 [i_0])))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (min((((var_2) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1)))), (((/* implicit */int) (signed char)31))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) min(((unsigned short)4092), ((unsigned short)4092)))) >= (((((/* implicit */int) (unsigned short)4092)) >> (((1374186265112797527ULL) - (1374186265112797507ULL)))))))) == (((((/* implicit */int) min((((/* implicit */signed char) arr_5 [i_2] [i_2])), ((signed char)32)))) * (((/* implicit */int) ((((/* implicit */_Bool) (short)3968)) || (((/* implicit */_Bool) (short)3968)))))))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max(((-(((((/* implicit */int) var_8)) % (((/* implicit */int) (short)-3956)))))), (((/* implicit */int) (short)7970)))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)4086)))))))) | (min((((/* implicit */int) ((signed char) (unsigned short)61444))), (((((/* implicit */int) arr_0 [i_1] [i_1])) << (((((/* implicit */int) (short)-3969)) + (3986)))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (-(arr_6 [(unsigned char)4] [(unsigned char)4])));
        var_20 = arr_2 [(signed char)0];
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    {
                        arr_20 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_6] [i_6]))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_17 [i_7] [i_4] [i_4])))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [(short)2] [i_5])))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((signed char) var_10)))));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (signed char)-62))));
    }
    var_25 ^= ((/* implicit */_Bool) var_10);
    var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) | ((~(((/* implicit */int) var_10))))));
}

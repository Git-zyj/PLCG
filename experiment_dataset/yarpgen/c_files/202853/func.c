/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202853
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
    var_18 = min((((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))), (((/* implicit */int) min((((unsigned short) var_16)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_19 ^= ((((_Bool) arr_3 [i_1] [i_0])) ? (arr_3 [i_0] [i_0]) : (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) max(((short)-16340), (((/* implicit */short) (unsigned char)242))))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (short)-1454)))))))))));
            var_21 |= ((/* implicit */signed char) max((((((/* implicit */long long int) (~(var_9)))) | (arr_3 [i_0] [i_1]))), (((/* implicit */long long int) max((((/* implicit */unsigned short) min(((short)1453), (((/* implicit */short) arr_2 [(unsigned char)12] [i_1] [(unsigned char)12]))))), (var_7))))));
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)57279)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0])))) : (437474311)))) ? (((/* implicit */int) max((max((var_17), (var_17))), (((/* implicit */short) ((_Bool) arr_2 [i_0] [i_0] [i_1])))))) : (max((((((/* implicit */_Bool) var_17)) ? (437474313) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) ((unsigned char) (short)1453)))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_0])) ? (48927993U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2])))));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_6 [i_5] [i_3] [i_0]))));
                            var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1479)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1468))) : (arr_14 [i_0] [i_2] [i_3] [i_4] [i_5] [i_5])));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_2] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
            var_25 &= ((/* implicit */signed char) -1514780766630932013LL);
        }
        arr_17 [i_0] = ((/* implicit */int) ((unsigned char) (unsigned short)10924));
    }
    /* vectorizable */
    for (signed char i_6 = 3; i_6 < 17; i_6 += 1) 
    {
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_6] [i_6 + 1] [i_6 + 2]))));
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 1; i_8 < 18; i_8 += 3) 
            {
                {
                    arr_26 [i_8] [i_7] [i_8] = ((/* implicit */unsigned long long int) -6486870788954941252LL);
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 17; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            {
                                arr_32 [i_6] [i_8] [i_8] [i_8] [i_8] = (-(((/* implicit */int) (unsigned short)8257)));
                                var_27 = ((/* implicit */unsigned char) (short)-16281);
                                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_8 + 1] [i_9] [i_10])) && (((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned int) (short)(-32767 - 1));
    var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (var_9)));
}

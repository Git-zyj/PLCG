/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218781
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) min((var_2), ((unsigned short)51542)))))), ((-(((/* implicit */int) ((_Bool) 2890231442U)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_4] [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)51525)), (((((/* implicit */int) (unsigned char)127)) >> (((((/* implicit */int) (unsigned short)13994)) - (13984)))))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [10] [10] [i_0] [13]))));
                                var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                                arr_13 [i_0] [i_4] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((short) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51542))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [(_Bool)1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)13996)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)14013)) != (((/* implicit */int) arr_2 [(_Bool)1])))))))) ? ((-(((/* implicit */int) ((((/* implicit */int) (short)15)) != (((/* implicit */int) arr_10 [i_0] [(_Bool)1]))))))) : ((~(((/* implicit */int) (signed char)-126)))));
                    var_16 += ((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (short i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                {
                    arr_22 [i_5] [i_7] [(short)9] [i_6 - 2] = ((/* implicit */unsigned char) arr_10 [i_6 - 1] [i_7]);
                    arr_23 [i_5] [i_7] [(_Bool)0] [i_7] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5]))) > (((arr_8 [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))), ((~((+(((/* implicit */int) arr_19 [i_6] [i_6]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (signed char)7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44385))))) : (((/* implicit */int) ((signed char) var_13)))))) : (var_5))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((_Bool) var_3)), ((!(((/* implicit */_Bool) 1594519887)))))))) : (((unsigned int) ((((/* implicit */int) (unsigned short)4088)) & (((/* implicit */int) (signed char)120)))))));
}

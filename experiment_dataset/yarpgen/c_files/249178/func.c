/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249178
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
    var_13 = ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)107))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) 2009598314)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)574))) : (var_10)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)65535))))))) ? (((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_4)))) : ((-(((/* implicit */int) ((signed char) var_10))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = (~(4666458079892150227LL));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) (short)32751);
                                arr_15 [i_4] [i_3] [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned int) (((~(274877906943LL))) / (((/* implicit */long long int) (~(1073741760U))))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-274877906938LL), (((/* implicit */long long int) ((unsigned short) 15561945925411464013ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_3] [i_3])))) : (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_4] [i_3] [i_2 - 1]) : (((/* implicit */unsigned int) var_5)))))))));
                                arr_16 [i_0] [i_0] [i_2] [i_3 + 1] [i_3] [4ULL] [i_2] = ((((/* implicit */_Bool) 13835058055282163712ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1] [i_2]))))) : (((/* implicit */int) ((_Bool) (~(-1LL))))));
                                arr_17 [i_1] [i_1] [(unsigned char)4] [i_0] [(unsigned char)4] = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) ((unsigned int) (unsigned char)111));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 4; i_5 < 12; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) (+(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9))))) * (((/* implicit */int) arr_0 [i_0 - 1]))))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 13835058055282163712ULL))));
                        var_19 = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) var_11)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                arr_26 [i_7] [i_0] [i_0] = ((/* implicit */long long int) (+(max((arr_12 [i_2 + 1]), (arr_12 [i_1])))));
                                arr_27 [0U] [i_1] [(unsigned short)7] [(unsigned short)10] [i_1] [(unsigned short)10] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) 2289955176U)) ? (((/* implicit */unsigned long long int) -2104212298713314894LL)) : (11418867205273785727ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165)))))), ((((+(((/* implicit */int) var_1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2] [(unsigned short)5] [6ULL])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}

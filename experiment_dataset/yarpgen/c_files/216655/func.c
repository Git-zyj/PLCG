/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216655
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
    var_12 = (+(min((((((/* implicit */_Bool) -1201563012)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) : (3358828174236387246LL))), (((/* implicit */long long int) ((_Bool) 2642687011U))))));
    var_13 = ((/* implicit */_Bool) ((unsigned long long int) ((var_3) ^ (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_3))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */unsigned long long int) ((((1073741823U) / (((/* implicit */unsigned int) 9)))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (var_7))))));
        arr_3 [i_0] = ((/* implicit */short) ((((1073741823U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28227))))) && (((/* implicit */_Bool) ((2642687022U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) var_7)))));
            var_15 |= ((/* implicit */signed char) (-(-18LL)));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 13886707436737838822ULL)) ? (((/* implicit */long long int) 3221225473U)) : (927190158988358167LL)));
        arr_11 [(unsigned short)10] = ((((/* implicit */int) var_6)) * (((((/* implicit */int) var_4)) + (((/* implicit */int) (signed char)-17)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4095)) ? (-1274646653) : (((/* implicit */int) (unsigned char)77))));
            arr_14 [(short)9] [i_3] = ((/* implicit */short) (+(((/* implicit */int) ((short) -19)))));
        }
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 8; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_20 [4] [4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 2642687011U))) ? (((((/* implicit */_Bool) -263471139)) ? (2823148810313303815ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38585))))) : (((/* implicit */unsigned long long int) 1652280284U))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 8; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_17 = ((unsigned long long int) arr_4 [i_7] [i_4 + 3]);
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
                                var_19 *= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) arr_16 [i_2] [7U])) + (((/* implicit */int) var_9)))));
                                var_20 = ((/* implicit */short) ((unsigned char) ((13011327906458555763ULL) | (13011327906458555757ULL))));
                                arr_25 [i_4] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9161)) ? (1652280283U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32355)))))) ? (((/* implicit */int) ((unsigned char) 3247340653402826640LL))) : (((((/* implicit */_Bool) arr_16 [7ULL] [i_4])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-32365))))));
                            }
                        } 
                    } 
                    arr_26 [i_2] [i_4] = ((/* implicit */short) ((long long int) arr_23 [i_5] [(short)4] [i_2] [i_2]));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4] [i_4 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_4 - 2] [i_4 - 2] [i_4 - 2])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8]))) : (((((/* implicit */_Bool) 28)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (16108460254232343165ULL)))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((2946458318849551862ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
        arr_29 [i_8] = (~(((/* implicit */int) arr_1 [i_8])));
        var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)28209))));
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((long long int) 1073741842U));
    }
}

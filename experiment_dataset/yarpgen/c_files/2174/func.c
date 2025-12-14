/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2174
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_18 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2450059457814876079LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-67))))) % (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % (2168195695U)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)57)))));
                            var_20 = ((/* implicit */int) var_4);
                            arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0] |= (((_Bool)1) ? (var_1) : ((+(((/* implicit */int) (unsigned char)1)))));
                            arr_14 [i_2] = ((((/* implicit */_Bool) var_5)) ? (arr_8 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))));
                        }
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */signed char) (-(((2657701848U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35)))))));
                        arr_16 [i_3] |= ((/* implicit */unsigned long long int) ((int) arr_0 [i_0 + 1]));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_20 [i_0] [(unsigned short)1] [i_0] [i_0] = ((((/* implicit */_Bool) (-(arr_8 [i_1 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_0)) - (34369))))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9277))))), (((/* implicit */unsigned long long int) arr_8 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_2 + 2])) != (((/* implicit */int) var_14))))) : (((((/* implicit */int) max((((/* implicit */unsigned char) var_15)), (arr_9 [12U] [i_1 - 1] [12U] [i_1] [i_1])))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) (_Bool)0))))))));
                        arr_21 [i_0] [i_1 - 1] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((_Bool) (unsigned short)9277))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)28)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9277))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 2) 
                    {
                        var_23 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (signed char)12))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)125))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8388606ULL)) ? (134217696) : (((/* implicit */int) (_Bool)1))))) : ((~(18446744073701163025ULL)))))));
                        var_24 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((unsigned short)56258), (((/* implicit */unsigned short) (_Bool)1)))))));
                        var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((arr_12 [i_2 - 3] [i_2] [i_2] [i_2] [i_2] [i_6]), (arr_12 [i_2 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [(unsigned short)8])))), (min((((/* implicit */unsigned long long int) (unsigned char)60)), (var_10)))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 36028797018963967LL)))))) : ((~(((unsigned int) var_14))))));
                        var_27 = ((/* implicit */_Bool) ((((137371844608ULL) >= (((/* implicit */unsigned long long int) -18)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 3] [i_2]))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)186)), ((unsigned short)34624)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */long long int) 2418882821U)) : (-3266517607161336815LL)))) : (max((var_10), (((/* implicit */unsigned long long int) (unsigned short)54476))))))));
                    }
                    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        var_28 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 9266782390319462876ULL)))) ^ (((((/* implicit */_Bool) (unsigned char)220)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106)))))))) | ((~(((((/* implicit */_Bool) var_9)) ? (arr_5 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27164)))))))));
                        arr_28 [(unsigned short)0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)0))))))) ? ((-(((long long int) (signed char)28)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_18 [i_0] [i_0]) ? (-2104349677) : (((/* implicit */int) (signed char)-8))))) && (((/* implicit */_Bool) ((int) arr_8 [i_2])))))))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-95350984), (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_27 [i_0 + 1] [i_7])), ((unsigned short)41774)))) : (((/* implicit */int) min((arr_27 [i_0 + 1] [i_7]), (arr_27 [i_0 + 1] [i_7]))))));
                    }
                    arr_29 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */long long int) arr_23 [i_0 + 1])) : (arr_6 [i_0 + 1])))));
                    arr_30 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!((((_Bool)1) || (((/* implicit */_Bool) var_4)))))))) <= (1876084465U)));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(13419376423289138676ULL)))) ? (((/* implicit */int) (unsigned short)5216)) : (max((((/* implicit */int) var_16)), (var_1)))))) : (((((/* implicit */_Bool) var_7)) ? (((unsigned int) var_5)) : (((((/* implicit */_Bool) (unsigned short)56258)) ? (2694094634U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 3) 
    {
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) 618329597))))) ? (((((/* implicit */_Bool) (unsigned short)18217)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [(_Bool)1]))) : (12273202049012444295ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)120)))));
        arr_34 [i_8] = ((/* implicit */int) var_5);
    }
    for (unsigned int i_9 = 1; i_9 < 9; i_9 += 4) 
    {
        var_32 = min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)47318))))) ? (((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (unsigned short)9273)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)224)))))), (((/* implicit */int) var_13)));
        arr_37 [i_9] |= ((/* implicit */int) ((unsigned long long int) (-(((unsigned long long int) arr_31 [i_9])))));
        var_33 = ((/* implicit */signed char) arr_31 [i_9 + 3]);
        arr_38 [i_9] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5027367650420412934ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9]))) : (var_12)))) ? (((/* implicit */int) arr_2 [i_9])) : (((/* implicit */int) min(((unsigned short)255), (((/* implicit */unsigned short) var_15))))))))));
    }
    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (unsigned short)65415)) & (((/* implicit */int) (unsigned short)63631)))) : (((/* implicit */int) (unsigned short)61435))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0))))) ? (((((((/* implicit */int) var_15)) + (2147483647))) << (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)40095)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))))))))));
}

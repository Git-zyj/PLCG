/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19808
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */int) arr_5 [i_0]);
                var_18 -= ((/* implicit */short) max((5331830463926106473LL), (((/* implicit */long long int) -63817707))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 947577680716184140LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_9)) ? (-947577680716184132LL) : (947577680716184140LL)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) var_12);
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) ((_Bool) var_12)))))) ? (((/* implicit */unsigned int) var_5)) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) -947577680716184141LL)) ? (arr_7 [i_2]) : (((/* implicit */int) arr_8 [i_2]))))) & (((((/* implicit */_Bool) arr_7 [i_2])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) min((min((-947577680716184146LL), (-947577680716184143LL))), (((((/* implicit */_Bool) -947577680716184146LL)) ? (((/* implicit */long long int) 196732726U)) : (-947577680716184141LL)))));
        var_22 = ((/* implicit */unsigned int) arr_8 [i_3]);
        arr_15 [i_3] = ((/* implicit */_Bool) arr_0 [i_3] [i_3]);
    }
    var_23 = var_9;
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    arr_25 [i_4] [i_5] [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) arr_16 [i_4])), (var_6)))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15628))) / (-947577680716184146LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_7)) : (var_1)))) ? (((((/* implicit */_Bool) (short)-20216)) ? (947577680716184145LL) : (((/* implicit */long long int) 1599451398U)))) : (((/* implicit */long long int) ((var_6) / (var_12)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8)))) ? ((+(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_21 [i_4] [i_5] [i_6])) : (((/* implicit */int) var_10))))))));
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((-1439805210) | (((/* implicit */int) (unsigned char)199)))))));
                    var_25 = ((/* implicit */unsigned short) arr_22 [i_4] [i_5]);
                    var_26 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3898)) ? (var_8) : (((((/* implicit */_Bool) arr_9 [i_4 - 1])) ? (((/* implicit */unsigned long long int) var_12)) : (4257737011048532766ULL)))));
                }
                for (unsigned short i_7 = 2; i_7 < 15; i_7 += 1) 
                {
                    var_27 = ((/* implicit */short) ((((int) ((var_11) <= (((/* implicit */int) arr_10 [i_4 - 1]))))) > (((((/* implicit */int) ((_Bool) var_3))) & (arr_7 [i_4 + 1])))));
                    var_28 = (+(((/* implicit */int) (_Bool)1)));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_29 = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_16)))) <= (max((var_14), (((/* implicit */unsigned int) var_3)))))));
                    var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49907))));
                }
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    var_31 = ((/* implicit */unsigned short) ((((-947577680716184146LL) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */long long int) (+(15289283)))) != (-947577680716184146LL)))) - (1)))));
                    var_32 = min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 772347843)) ? (((/* implicit */int) arr_21 [i_4 + 1] [i_4 + 1] [i_9])) : (271455491))))))), (((((/* implicit */_Bool) 1218395730811724065ULL)) ? (((/* implicit */int) ((unsigned short) arr_26 [i_4]))) : (var_3))));
                    var_33 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((1218395730811724065ULL), (((/* implicit */unsigned long long int) (short)-3111))))) && (((/* implicit */_Bool) -947577680716184141LL)))) ? (((((/* implicit */int) (unsigned short)43023)) ^ (772347843))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)36)))))))));
                }
            }
        } 
    } 
}

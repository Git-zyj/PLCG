/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42120
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_17 ^= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
            var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)119))));
        }
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_19 += arr_4 [i_1] [i_3] [i_1];
            arr_11 [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) arr_5 [i_1] [i_1])))) != (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0)), (arr_6 [i_3] [i_3])))))))));
            arr_12 [i_1] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6)))))))), ((((!(((/* implicit */_Bool) 4294967271U)))) ? (((/* implicit */unsigned long long int) min((0), (((/* implicit */int) var_1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))) * (0ULL)))))));
        }
        for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
        {
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */short) var_11);
            arr_16 [i_1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))) : (arr_6 [i_1] [i_1]))))))));
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_2 [i_4]))));
        }
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~((((_Bool)1) ? (7267334046828481505LL) : (9223372036854775807LL)))))) ? ((-(((((/* implicit */_Bool) arr_8 [i_1] [6LL] [i_1])) ? (4998622129341640101LL) : (((/* implicit */long long int) 4260356715U)))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))))), ((-(905974387U))))))));
        arr_17 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)16)))))))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned short)65535))));
        var_22 = ((/* implicit */short) -13);
        arr_18 [i_1] = ((/* implicit */unsigned int) 8467992742308090136ULL);
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
    {
        var_23 = ((((((/* implicit */unsigned int) -13)) == (34610581U))) ? (((((/* implicit */_Bool) arr_8 [i_5] [(unsigned char)6] [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!((_Bool)1)))));
        arr_22 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) (short)(-32767 - 1)))));
        arr_23 [i_5] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) 4260356715U)) && (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((34610581U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_24 = ((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_5]))));
    }
    var_25 = ((/* implicit */long long int) (signed char)-127);
    /* LoopSeq 2 */
    for (short i_6 = 1; i_6 < 13; i_6 += 2) 
    {
        var_26 = ((/* implicit */long long int) (-(min((4294967291U), ((~(4260356710U)))))));
        arr_27 [i_6] [i_6] = max(((-((~(((/* implicit */int) (short)32758)))))), (((/* implicit */int) (unsigned char)136)));
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) (-((-((+(((/* implicit */int) (short)22080))))))));
                    var_28 *= ((/* implicit */int) ((((/* implicit */long long int) (~(1821813313U)))) < ((+((+(0LL)))))));
                    var_29 += ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 19; i_9 += 2) 
    {
        var_30 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)27))))) ? (34610581U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_33 [i_9])))))));
        arr_34 [i_9] = 12;
    }
    var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) 9223372036854775807LL)))))), (34610580U)));
}

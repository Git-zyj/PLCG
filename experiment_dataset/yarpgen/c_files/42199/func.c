/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42199
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) min((((long long int) (!(var_2)))), (((/* implicit */long long int) ((int) min((var_3), (((/* implicit */unsigned short) var_7)))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((int) ((min((arr_0 [i_0 + 1]), (var_8))) / (((/* implicit */int) ((unsigned short) var_2)))))))));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned short) (signed char)-73))) ? (max((-1168574521), (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [2]) : (((/* implicit */int) (unsigned short)6291)))))), (((/* implicit */int) ((((/* implicit */int) ((arr_0 [i_0 + 1]) > (arr_0 [i_0])))) < (min((((/* implicit */int) (signed char)-73)), (131070)))))))))));
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        arr_11 [(short)5] [i_1] [i_1] [(short)5] = ((/* implicit */signed char) ((((((long long int) (-(1168574524)))) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)65535)) - (65533)))));
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_9))));
                        arr_12 [(signed char)5] [i_1] [i_3] [i_3] [(short)6] [i_3] = ((/* implicit */signed char) var_0);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (+(max((((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))) : (arr_8 [i_1] [(signed char)4] [i_1 + 1]))), (((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25236))))))))))));
        var_15 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) arr_10 [9] [i_1 - 1] [i_1] [(unsigned short)7] [(unsigned short)5] [i_1])))) ? (((/* implicit */long long int) var_8)) : (max((((/* implicit */long long int) var_8)), (var_5))))), (((/* implicit */long long int) arr_7 [i_1 + 1] [i_1]))));
    }
    var_16 = ((/* implicit */_Bool) (-(max((((/* implicit */int) min(((unsigned short)25466), (((/* implicit */unsigned short) var_2))))), (min((-1375481092), (786162884)))))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [i_5]))))))) + (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)29161)))) <= (((/* implicit */int) arr_17 [(signed char)10] [(signed char)10] [i_7])))))));
                    arr_21 [(short)8] [i_6] [i_7] = (unsigned short)14;
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_8 = 4; i_8 < 21; i_8 += 2) 
    {
        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-16695)) || (((/* implicit */_Bool) -6789318570453934488LL))))))))));
                    arr_31 [i_10] [i_8 - 4] [i_10] [i_8 - 3] = ((/* implicit */long long int) arr_25 [i_9]);
                    arr_32 [(signed char)20] [(signed char)19] [i_8] [i_8] = min((((((/* implicit */_Bool) arr_30 [i_8 + 1] [i_8 + 1] [i_8 - 4])) ? (8109715946967173054LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_8 - 1] [i_8 - 2] [i_8 - 1]))))), (((/* implicit */long long int) ((unsigned short) arr_30 [i_8 - 4] [i_8 + 1] [i_8 + 1]))));
                    arr_33 [i_8 + 1] [i_8 + 1] = ((/* implicit */long long int) min(((short)-10794), (((/* implicit */short) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8 - 1]))))))));
                    var_19 = ((/* implicit */int) (short)-24922);
                }
            } 
        } 
    } 
}

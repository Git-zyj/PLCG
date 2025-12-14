/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54557
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
    var_19 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) ((int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_1 [i_0])))))));
                arr_6 [i_1] = ((/* implicit */short) var_1);
                arr_7 [i_0] [18] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (378750674)))), (var_11)))) ? (((/* implicit */long long int) -649051154)) : (min((4861134143337219518LL), (-9223372036854775807LL)))));
                var_21 = ((/* implicit */_Bool) ((unsigned char) 0ULL));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_13))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    {
                        var_23 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)52899)) || (((/* implicit */_Bool) arr_9 [i_2] [i_2])))) && (((((/* implicit */_Bool) arr_9 [i_2] [i_3])) && (((/* implicit */_Bool) arr_9 [1U] [i_3]))))));
                        arr_17 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                    }
                } 
            } 
        } 
        arr_18 [i_2] = ((/* implicit */unsigned long long int) ((min((var_12), (((/* implicit */long long int) arr_14 [i_2] [i_2])))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2]))) + (var_3))))));
        arr_19 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max(((-(((/* implicit */int) (signed char)0)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-118))) < (arr_9 [i_2] [i_2]))))))) <= ((-(arr_15 [i_2] [19LL] [i_2])))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_11) : (((/* implicit */int) (signed char)-126))))) ? (arr_15 [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_6] [i_6]))))))));
        /* LoopNest 3 */
        for (signed char i_7 = 3; i_7 < 22; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((((/* implicit */_Bool) (~(arr_28 [i_6])))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-125)), ((unsigned short)65535)))))) <= (((/* implicit */int) max(((signed char)118), (((/* implicit */signed char) (_Bool)1))))))))));
                            var_25 |= ((/* implicit */signed char) ((short) (-(((arr_12 [i_6] [i_9]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)108))))))));
                        }
                        arr_36 [i_7] = ((/* implicit */unsigned short) -7359648276285917014LL);
                    }
                } 
            } 
        } 
    }
}

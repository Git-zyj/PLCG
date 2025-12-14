/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201580
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
    var_10 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 140737488355320ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))), (var_7)));
    var_11 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) arr_6 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_12 &= ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) != (-1945557104))) ? (((arr_1 [i_0 - 3]) / (arr_1 [i_0 - 1]))) : (((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)57935)))) - (((/* implicit */int) (_Bool)1))))));
                                arr_14 [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned int) (unsigned char)224);
                                arr_15 [i_0] [17LL] [i_2] [17LL] [10] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) ^ (arr_3 [i_2] [i_3] [i_4])))) || (((/* implicit */_Bool) ((arr_7 [i_0 + 2] [i_1] [11U]) ? (var_9) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))), (((((/* implicit */_Bool) 826816437U)) ? (1298780679286340602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2778)))))));
                                var_13 += arr_7 [i_0] [i_1] [i_4];
                                var_14 += ((/* implicit */unsigned int) (((((-(var_0))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (var_0))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_3 - 3] [i_4]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */int) arr_11 [i_5] [i_5] [i_5]);
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65535)))))));
        var_16 = ((/* implicit */unsigned int) (!((_Bool)1)));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((unsigned long long int) min((((/* implicit */long long int) 423523528U)), (arr_2 [i_5] [i_5] [i_5])))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_5])) ? (arr_5 [i_5]) : (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [i_5] [i_5] [i_5] [i_5]))))))))));
    }
}

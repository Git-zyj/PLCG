/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43069
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), ((~((((((~(((/* implicit */int) arr_1 [i_2] [i_1])))) + (2147483647))) >> (((((-3243480505355490483LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (3243480505355490496LL)))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_18 ^= ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_3 [(short)4])))) ^ ((~(var_7)))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_0]))), (((/* implicit */unsigned int) max(((signed char)117), ((signed char)118))))))), (max((((((/* implicit */_Bool) -1407716108074105364LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) : (arr_0 [i_3] [i_0]))), (arr_9 [2] [(_Bool)1] [i_1] [(signed char)4] [(signed char)4] [i_3]))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_9))));
                        arr_13 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) var_16)) : (((int) arr_6 [(unsigned char)2] [i_1] [(unsigned short)4] [0])))));
                    }
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) (~(var_6)));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned int) var_8);
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_8 [i_0] [i_0] [i_2] [9U] [i_0])), ((signed char)109)))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-105)))))));
                        arr_19 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (max(((_Bool)1), ((_Bool)1))))))));
                        var_22 = ((/* implicit */signed char) arr_0 [i_2] [i_5]);
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_23 *= ((/* implicit */unsigned char) ((signed char) arr_7 [i_6 + 1] [4] [i_0]));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            var_24 -= ((/* implicit */long long int) min((2U), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)100)))))))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((1407716108074105363LL) - (((/* implicit */long long int) ((/* implicit */int) ((min((var_5), (((/* implicit */unsigned int) arr_10 [i_0] [18ULL] [i_2] [10U])))) > (((/* implicit */unsigned int) max((-795070652), (((/* implicit */int) var_14))))))))))))));
                            arr_27 [i_0] [i_6] [i_2] [i_6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((arr_17 [i_0] [(unsigned char)16] [i_2] [i_7]) ? (arr_4 [i_0] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5802)))))))) % ((~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) var_9)) : (-1407716108074105364LL)))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (short)496))));
    var_27 *= max((((/* implicit */unsigned char) var_16)), (var_13));
}

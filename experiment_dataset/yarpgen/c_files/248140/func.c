/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248140
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] [(signed char)0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)58510)) + (-1319956351)))), (arr_2 [i_0])));
        var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) 11U)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ (2147483647)))), (arr_0 [(signed char)7])))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) max(((unsigned short)46733), ((unsigned short)58490))));
        arr_7 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-18720)))), ((+((~(var_15)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)99))))), (var_10)));
                            arr_16 [i_1] [i_1] [i_1] [i_3] [i_4] [(signed char)14] = ((/* implicit */unsigned short) max((min((arr_15 [(signed char)18] [i_4] [i_4] [i_3] [i_2] [i_1]), (arr_15 [i_1] [1ULL] [i_2] [i_3] [i_4] [i_5]))), (((/* implicit */unsigned long long int) ((unsigned short) ((signed char) (unsigned char)192))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_1] [(signed char)19] [i_6] [i_6] = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_12 [i_1] [i_2] [i_3]))), (((((/* implicit */_Bool) 16591086949673761635ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_12 [i_2] [i_3] [i_6])))));
                            var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) (signed char)26))))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)43124)), (-147964845)))) : (max((((/* implicit */long long int) (signed char)-115)), (8382372850495397286LL))))), (((/* implicit */long long int) (((((~(((/* implicit */int) arr_14 [i_1] [i_2] [i_2])))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)58510)) - (58496))))))));
                        }
                        var_21 = (-((~(((/* implicit */int) arr_11 [i_2] [i_4])))));
                        arr_21 [i_4] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_1] [i_2]))))) > (max((4890171236418938859LL), (((/* implicit */long long int) (signed char)-125))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_14 [i_4] [(_Bool)0] [i_1])) * (((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) var_6))));
                    }
                } 
            } 
        } 
        var_23 = ((arr_10 [i_1] [i_1] [(unsigned short)2] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_1])), (min((arr_11 [i_1] [i_1]), (var_5))))))));
    }
    var_24 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (short)20064)) ? (((/* implicit */int) (short)4838)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((-971225886) > (var_15)))))));
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-(min((((var_0) ? (((/* implicit */unsigned long long int) var_16)) : (var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_5))))))))))));
}

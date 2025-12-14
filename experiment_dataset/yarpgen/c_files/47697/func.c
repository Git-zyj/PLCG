/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47697
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
    var_15 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */long long int) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)0)))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max(((signed char)12), ((signed char)2)))) == ((-(((/* implicit */int) (unsigned short)44676)))))))) == (var_13)));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */int) (-(var_5)));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) ((short) arr_1 [i_0 + 1] [i_0 + 1]))) | (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_19 = ((/* implicit */unsigned short) max((((((((/* implicit */int) (unsigned short)44672)) == (((/* implicit */int) (signed char)-9)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)20848)) < (((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])))), (((/* implicit */int) (signed char)0))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((unsigned int) ((short) (signed char)106))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)0)), (arr_1 [i_2] [i_0])))))))))))));
                    var_21 = min((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0])))))), (((((/* implicit */_Bool) 1692298231U)) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_1] [i_1]))) : (1692298231U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0])), (var_14))))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 1; i_3 < 22; i_3 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) (signed char)0)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3 - 1])) == (arr_8 [i_5 + 1] [i_3 + 1])))) : ((~(((/* implicit */int) arr_11 [i_3] [i_3]))))));
                        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((min((arr_10 [i_3]), (((/* implicit */unsigned char) (signed char)-102)))), (arr_10 [i_3]))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) var_11);
        var_25 += (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_2))))))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_11 [i_3] [i_3]))));
    }
    var_27 = ((/* implicit */int) min((var_27), ((-(min((((int) 1854362268530528425ULL)), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (unsigned short)37089))))))))));
}

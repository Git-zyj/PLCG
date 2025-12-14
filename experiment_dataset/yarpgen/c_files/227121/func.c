/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227121
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
    var_18 += var_4;
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_15))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) var_1);
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -73484763)) ? (73484769) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (((unsigned long long int) 3702809290U))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_3), ((unsigned char)80))))))) ? (((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (arr_2 [i_1] [i_1] [i_0]))), (((arr_3 [i_1] [i_0]) ? (((/* implicit */unsigned int) var_10)) : (592158014U)))))) : (min((-2767113291868389064LL), (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -73484757)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))))) : (var_9)));
                    arr_7 [i_0] [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)92)) ? (-9179051716738390234LL) : (2070270475048815745LL)))) : (((unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (min((568358724U), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))))))));
                    var_23 = ((/* implicit */unsigned short) ((unsigned int) (+(var_5))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (signed char)82)) ? (18198094584277914021ULL) : (((/* implicit */unsigned long long int) -2587175111483667730LL))))));
                    var_25 *= ((/* implicit */int) (!((((!(var_12))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) 1161613651)), (arr_2 [i_0] [i_0] [i_0]))))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (var_9) : (((/* implicit */unsigned long long int) (~((~(73484772))))))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-82)) * (((((/* implicit */_Bool) 2070270475048815745LL)) ? (((/* implicit */int) (signed char)83)) : (var_10)))))) ? (((/* implicit */long long int) (-((~(var_7)))))) : (((var_13) % (((/* implicit */long long int) arr_12 [i_6]))))));
                        arr_21 [i_5] [i_5] [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) var_13)), (var_5))) : (((/* implicit */unsigned long long int) arr_18 [i_3] [i_4] [i_5] [i_4])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) <= (var_0))))) : (((long long int) arr_15 [i_3] [i_4])))))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2147483647)), (1993901194666719745ULL)))))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) ((arr_10 [i_3] [i_3]) > (arr_10 [i_3] [i_3])));
        }
        var_30 = ((/* implicit */unsigned char) arr_18 [i_3] [i_3] [i_3] [i_3]);
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_16 [i_3] [4])) : (arr_12 [i_3]))) : ((-(((/* implicit */int) arr_14 [i_3]))))));
    }
}

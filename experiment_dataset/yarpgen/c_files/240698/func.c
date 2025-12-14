/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240698
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_18 = (((~(9095417838597904183LL))) ^ (min((-1190335599871232898LL), (arr_0 [i_0]))));
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-6404731357406781597LL)))) ? ((~(arr_1 [i_0]))) : (1190335599871232897LL)))) ? (((long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (1321415354595321053LL) : (1655844134792515623LL)))) ? (959655097997074328LL) : (5318384592195339625LL))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_20 = var_16;
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    arr_8 [i_2 + 1] [i_1] = min(((+(((var_1) - (9095417838597904183LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2]))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -7470939688305244131LL)) ? (arr_6 [i_1] [i_1] [i_1]) : (8070779254031890161LL)))))) ? (((((var_1) - (var_9))) - (min((-5296862326572076592LL), (-5010772124379664168LL))))) : (((((-4398046511104LL) - (7174647255846276730LL))) + (2153627742183530518LL)))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                var_22 = ((((arr_12 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_4 + 1]) != (var_11))) ? (((arr_12 [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] [i_4 + 1]) / (arr_12 [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_4 + 2]))) : (((long long int) -7774528827185452881LL)));
                                var_23 = min((4659496452348529447LL), (arr_7 [i_3] [i_4] [i_5]));
                                var_24 = min((arr_5 [i_2 + 1] [i_2] [i_2]), (((((/* implicit */_Bool) var_8)) ? (((arr_10 [i_1] [i_4 + 4] [i_5]) - (arr_7 [i_1] [i_1] [3LL]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_2 [i_1])))))))));
                            }
                        } 
                    } 
                    var_25 = arr_4 [i_1] [i_2 + 1] [i_3];
                }
            } 
        } 
        arr_13 [i_1] = ((long long int) ((long long int) ((arr_9 [i_1] [i_1]) / (-7112491896128151415LL))));
        var_26 = ((((((/* implicit */_Bool) (~(var_7)))) && (((/* implicit */_Bool) arr_12 [i_1] [i_1] [16LL] [17LL] [9LL])))) ? (((var_6) + (min((-231876010376213984LL), (-5707027420824941920LL))))) : (((((/* implicit */_Bool) (-(1190335599871232897LL)))) ? (((((/* implicit */_Bool) var_10)) ? (1760747445455318576LL) : (arr_5 [i_1] [i_1] [i_1]))) : (arr_7 [i_1] [i_1] [i_1]))));
    }
    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        var_27 = ((/* implicit */long long int) min((var_27), (min((-2136553066059752176LL), (1321415354595321053LL)))));
        var_28 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 9078583593440067643LL)) ? (1321415354595321028LL) : (1321415354595321036LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 2612048056249736254LL)))))))) : (arr_5 [i_6] [i_6] [i_6]));
        var_29 = ((/* implicit */long long int) min((var_29), (((((long long int) min((1624526782487462613LL), (1624526782487462631LL)))) << (((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1190335599871232907LL)) || (((/* implicit */_Bool) -1190335599871232908LL)))))))) - (292104544097689455LL)))))));
    }
    var_30 = var_11;
}

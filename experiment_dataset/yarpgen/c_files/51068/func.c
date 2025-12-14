/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51068
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -7438565800715026891LL))))) != (((/* implicit */int) var_0)))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)195)), (var_3)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) % (4294967285U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)-31603))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)905)) ^ (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)18])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 252264308)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) var_11))))))) ? ((~(((/* implicit */int) min((arr_2 [i_1]), ((short)-31579)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((896542996999604919ULL), (((/* implicit */unsigned long long int) var_7))))))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [8ULL] [i_1])) : ((~(((/* implicit */int) arr_3 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (~(((unsigned long long int) var_2)))))));
                        var_19 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 252264298)) ? (1067006548) : (((/* implicit */int) (unsigned char)106))))))) ? (max((((/* implicit */unsigned long long int) max((arr_9 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */short) (_Bool)1))))), (((unsigned long long int) (short)28990)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1] [i_1] [i_4] [(_Bool)1]))))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (((+(arr_4 [(unsigned char)14]))) * (((arr_4 [(unsigned char)0]) ^ (arr_4 [20U]))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        arr_15 [i_5] [(signed char)12] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned char) max((((/* implicit */unsigned long long int) var_10)), (arr_14 [i_5])))));
        var_21 = ((/* implicit */int) (((-(((/* implicit */int) var_8)))) >= (var_2)));
        arr_16 [i_5] = (+(min((((/* implicit */unsigned long long int) arr_12 [i_5] [i_5])), (6816078830610708527ULL))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((var_13) / (((/* implicit */long long int) 6U))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 1801841090U)) ? (((/* implicit */int) var_4)) : (-301040948))) > (min((1621991360), (((/* implicit */int) var_7))))))) : (((/* implicit */int) var_5))));
    var_23 = ((/* implicit */_Bool) (((!(((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 16895220135307874410ULL)))))) ? ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_12))))) : (max((((((/* implicit */_Bool) var_13)) ? (-2999798047237668834LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_8)))))))));
}

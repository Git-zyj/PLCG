/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206083
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)12)), (var_1)))) ? ((~(-476920920))) : (((/* implicit */int) ((_Bool) (unsigned char)105)))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 1])) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))) : (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) var_0)))))));
        var_11 = (signed char)-9;
    }
    var_12 = (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)192)) ? (12314995055991789163ULL) : (((/* implicit */unsigned long long int) 3362977638U))))))));
    var_13 = var_3;
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((var_4) % (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) var_7)))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((arr_3 [i_1]) < (var_6)))), (min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (var_4)))), ((unsigned short)0))))))));
                    var_15 *= ((/* implicit */signed char) max((var_6), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_2]))))), ((+(((/* implicit */int) var_7)))))))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (short i_7 = 3; i_7 < 10; i_7 += 1) 
                {
                    {
                        arr_22 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) % (var_5))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_5] [i_5] [i_7]))))) <= (((arr_9 [i_4] [i_6] [i_6] [i_7]) - (((/* implicit */unsigned int) var_5))))))) : (var_5)));
                        var_16 -= ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */int) arr_12 [i_7 + 3]))))))));
                        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
                        var_18 = ((/* implicit */signed char) (((!(((_Bool) arr_14 [(unsigned short)0])))) ? (((((/* implicit */int) var_2)) >> ((((+(var_6))) - (3075438209U))))) : ((((!(((/* implicit */_Bool) (short)-1)))) ? (((/* implicit */int) var_2)) : ((+(-302304434)))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))) <= (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_0))))) ? (arr_21 [(unsigned short)8] [10LL] [i_4] [i_4] [(unsigned short)8]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [0LL])))))))));
    }
    var_20 = ((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) -923852242)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)29))) : (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (6831405423469885938LL)))))));
}

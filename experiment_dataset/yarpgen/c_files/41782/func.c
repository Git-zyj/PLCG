/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41782
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1133701176))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [(unsigned char)1])))))))) ? ((-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_3 [i_0] [i_0]))))))) : (min((((/* implicit */int) min((arr_0 [6]), (((/* implicit */unsigned short) (unsigned char)0))))), (((((/* implicit */_Bool) (unsigned short)40075)) ? (arr_1 [i_0]) : (((/* implicit */int) var_9))))))))));
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            var_19 = ((/* implicit */short) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_11)))) && ((!(((/* implicit */_Bool) var_7))))))) >= (((/* implicit */int) (((+(((/* implicit */int) var_12)))) >= (min((-1133701178), (1133701183))))))));
            arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (((+(1133701180))) / (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? ((-(var_15))) : (((-1133701183) / (((/* implicit */int) (signed char)85))))))));
            arr_7 [i_0] [i_0] [i_0] = (-((-(((arr_1 [i_1]) - (((/* implicit */int) (signed char)-85)))))));
            arr_8 [i_0] [i_1] = ((/* implicit */_Bool) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), (((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned char)238))))))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (arr_0 [i_0])))))) >> (((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) >= (((/* implicit */int) var_10))))) * ((~(-1)))))));
        }
    }
    for (short i_2 = 2; i_2 < 18; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            arr_17 [i_2 - 1] [i_2 - 1] [i_3] = ((/* implicit */short) (((((-(arr_1 [(short)13]))) ^ (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_2])) >= (((/* implicit */int) arr_10 [i_2]))))))) >= (((/* implicit */int) ((((((/* implicit */int) arr_10 [0LL])) | (((/* implicit */int) var_13)))) <= (((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_13 [i_3])))))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (int i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    {
                        arr_23 [(unsigned short)1] = ((/* implicit */short) (+((~(((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_12))))))));
                        var_20 = ((((/* implicit */int) (unsigned char)155)) - (min(((+(1133701197))), (((/* implicit */int) (short)-1)))));
                    }
                } 
            } 
            arr_24 [i_2 + 1] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_10)), (arr_15 [i_2] [i_2 - 2] [i_3])))) ? (((((/* implicit */int) (short)20)) / (((/* implicit */int) (short)-782)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_19 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) var_0)))))) / ((-(((((/* implicit */int) (short)-764)) * (((/* implicit */int) var_10))))))));
        }
        for (short i_6 = 3; i_6 < 18; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                arr_30 [i_6] [i_6 - 1] [(unsigned char)3] [i_6] = ((((/* implicit */int) (signed char)-105)) + ((+(((((/* implicit */_Bool) (unsigned char)13)) ? (-1133701181) : (((/* implicit */int) (short)23)))))));
                arr_31 [i_6] [i_2] [i_6] [i_6] &= ((/* implicit */long long int) max((((((((/* implicit */int) arr_4 [i_6] [i_6])) >= (((/* implicit */int) arr_13 [i_2])))) ? ((+(((/* implicit */int) (unsigned char)166)))) : (((((/* implicit */int) arr_27 [i_2] [i_2] [(signed char)0])) | (-1))))), (min(((+(((/* implicit */int) var_17)))), (((/* implicit */int) max(((unsigned char)68), (((/* implicit */unsigned char) (_Bool)1)))))))));
            }
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    {
                        var_21 *= ((/* implicit */short) ((((((((/* implicit */_Bool) var_17)) ? (var_15) : (-1133701155))) & ((~(((/* implicit */int) arr_19 [i_2 - 2] [i_2 - 2] [5] [i_2])))))) + (((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned short)49649))))) + ((-(((/* implicit */int) var_4))))))));
                        arr_39 [i_2] [i_2] [i_2 - 1] [i_6] [(unsigned short)8] [i_2 - 1] = ((/* implicit */unsigned char) min((((1133701175) - (135397402))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_20 [i_2] [i_9])), (var_6)))))))));
                        var_22 = (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)232)) | (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : ((+(((/* implicit */int) (short)-18)))))));
                        var_23 -= ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)13)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-39)) + (-1133701176)))) ? (((/* implicit */int) (unsigned short)4)) : (-1133701176))) : (((((((/* implicit */int) var_17)) - (((/* implicit */int) var_5)))) + ((-(((/* implicit */int) (signed char)103)))))));
                        arr_40 [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1048576)) ? (((((/* implicit */_Bool) (short)-8389)) ? (-1) : (-15))) : (1673911708))))));
                    }
                } 
            } 
        }
        arr_41 [i_2] [i_2 - 2] = ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_11)) <= (-1133701156)))), ((-(((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 1] [(short)8] [i_2 - 1]))))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_38 [i_2] [i_2 - 2] [i_2 - 2])) || (((/* implicit */_Bool) 1142607614))))))) : (((/* implicit */int) min((min((((/* implicit */unsigned short) arr_33 [i_2] [i_2] [i_2] [i_2 - 2])), ((unsigned short)25010))), (((/* implicit */unsigned short) max((var_4), (arr_15 [i_2] [i_2] [(short)18]))))))));
        var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(min((arr_14 [i_2]), (((/* implicit */int) arr_37 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2]))))))), (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */long long int) -1384028355)) : (-8665032579275789805LL)))));
    }
    for (short i_10 = 2; i_10 < 18; i_10 += 2) /* same iter space */
    {
        arr_45 [i_10] = ((/* implicit */unsigned short) max((2), (65535)));
        var_25 = ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) (short)-23722)) : (((/* implicit */int) (short)-18638)));
    }
    var_26 &= ((/* implicit */short) ((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11)))), ((-(((/* implicit */int) var_5)))))) >= (((((((/* implicit */int) var_6)) + (var_16))) - ((-(((/* implicit */int) var_11))))))));
    var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) 4)))) ? ((+(min((1384028327), (((/* implicit */int) (signed char)-103)))))) : (((((-8) - (((/* implicit */int) var_9)))) + (((/* implicit */int) max(((short)-32195), ((short)32761))))))));
    var_28 |= ((/* implicit */short) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))))));
}

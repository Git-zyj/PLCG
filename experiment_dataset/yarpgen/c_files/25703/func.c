/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25703
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
    var_16 &= ((/* implicit */_Bool) var_5);
    var_17 = var_14;
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_2);
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)65535)) / (var_13))) <= (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) == (var_5)))), ((short)0)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((signed char) (unsigned short)1));
                    arr_13 [(_Bool)1] [i_1] = ((/* implicit */short) ((_Bool) (unsigned short)1));
                    var_20 = ((long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46))) : (arr_2 [i_1]))) / (((/* implicit */unsigned long long int) arr_10 [i_3] [i_2]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 12; i_5 += 4) 
            {
                {
                    var_21 -= ((/* implicit */unsigned short) min((((8565399874764796604LL) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_4]))))), ((!(((/* implicit */_Bool) arr_0 [i_1] [i_5 + 1]))))));
                    arr_19 [i_1] [i_4] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (arr_10 [(signed char)11] [i_4])))), (var_5))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_11 [i_1] [i_4])))) ^ (13027767398725692550ULL)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 19; i_6 += 3) /* same iter space */
    {
        var_22 = (-(((/* implicit */int) arr_0 [i_6 - 4] [i_6])));
        var_23 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) -8565399874764796612LL)))));
        arr_22 [i_6] [i_6] = ((/* implicit */signed char) (-(arr_20 [i_6] [i_6])));
    }
    for (int i_7 = 4; i_7 < 19; i_7 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) max(((-(min((arr_20 [i_7 + 1] [i_7]), (8565399874764796604LL))))), ((+(arr_20 [i_7] [i_7])))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (unsigned int i_10 = 1; i_10 < 19; i_10 += 3) 
                {
                    {
                        var_25 = ((/* implicit */signed char) (unsigned short)18);
                        var_26 = ((/* implicit */unsigned long long int) (~(3611667449577746332LL)));
                        var_27 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ ((((!(((/* implicit */_Bool) 3176514113078738427LL)))) ? ((~(((/* implicit */int) (unsigned char)129)))) : ((~(((/* implicit */int) (unsigned short)5))))))));
                        arr_34 [i_8] = ((/* implicit */unsigned char) min(((unsigned short)28), (arr_26 [i_8] [i_8])));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */int) var_14);
    var_29 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_8)))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))), (((/* implicit */int) var_11)))))));
}
